#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

int print_char(char c) {
    return write(1, &c, 1);
}

int print_string(const char *str) {
    int count;
    count = 0;
    while (*str) {
        count += print_char(*str);
        str++;
    }
    return count;
}

int _printf(const char *format, ...) {
  int count;
    va_list args;
    va_start(args, format);
    
    count = 0;

    while (*format) {
        if (*format == '%') {
            format++;
            switch (*format) {
                case 'c': {
                    char c = (char)va_arg(args, int);
                    count += print_char(c);
                    break;
                }
                case 's': {
                    const char *str = va_arg(args, const char *);
                    count += print_string(str);
                    break;
                }
                case '%': {
                    count += print_char('%');
                    break;
                }
                default:
                    count += print_char('%');
                    count += print_char(*format);
                    break;
            }
        } else {
            count += print_char(*format);
        }
        format++;
    }

    va_end(args);
    return count;
}

