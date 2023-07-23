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

static int int_length(int num) {
    int length = 0;
    if (num == 0) {
        return 1;
    } else if (num < 0) {
      length++;
        num = -num;
    }
    while (num > 0) {
        length++;
        num /= 10;
    }
    return length;
}

static int print_integer(int num) {
    int count = 0;
    char buffer[20];
    int i;
    int length = int_length(num);
    int index = length - 1;

    if (num < 0) {
        count += print_char('-');
        num = -num; 
    }

    if (num == 0) {
        buffer[index--] = '0';
    } else {
        while (num > 0) {
            buffer[index--] = (num % 10) + '0';
            num /= 10;
        }
    }

    for (i = 0; i < length; i++) {
        count += print_char(buffer[i]);
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
