#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int handle_format_specifier(char format, va_list args);
int print_string(const char *str);
int print_char(char c);
int print_integer(int num);

/**
 * _putchar - writes the character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */

int _putchar(char c);

#endif
