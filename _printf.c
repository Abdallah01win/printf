#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include "main.h"

/**
* Helper function to print a single character
*/
int print_char(char c) {
    return write(1, &c, 1);
}

/**
* Helper function to print a string
*/
int print_string(const char *str) {
    int count;
    count = 0;
    while (*str) {
        count += print_char(*str);
        str++;
    }
    return count;
}

int print_integer(int num)
{

    int reverse = 0;
    int count = 0;

    if (num == 0)
    {
       return (1);
    }
    
    if (num < 0)
    {
        print_char('-');
        num = -num;
        count++;
    }

    while (num > 0)
    {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
        count++;
    }

    while (reverse > 0)
    {
        int digit = reverse % 10;
        print_char('0' + digit);
        reverse /= 10;
    }

    return count;
}


int handle_format_specifier(char format, va_list args)
{
    switch (format) 
    {
        case 'c':
            return (print_char((char)va_arg(args, int)));
            break;
        case 's':
            return (print_string(va_arg(args, const char*)));
            break;
        case 'd':
        case 'i':
            return (print_integer(va_arg(args, int)));
            break;
        case '%':
            return (print_char('%'));
            break;
        default:
            print_char('%');
            print_char(format);
            return (2);
            break;
    }
}


/**
* The main _printf function
*/
int _printf(const char *format, ...) {
  int count;
    va_list args;
    va_start(args, format);
    
    count = 0;

    while (*format) {
        if (*format == '%') {
            format++;
            
           count += handle_format_specifier(*format, args);

        } else {
            count += print_char(*format);
        }
        format++;
    }

    va_end(args);
    return count;
}
