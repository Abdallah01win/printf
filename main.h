#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>

void custom_printf(const char *format, ...);
void print_integer(int num);
void print_string(const char *str);
int print_char(char c);
int print_digits_integer(int ptr);
void handle_format_specifier(char format, va_list args);


void _printf(const char *format, ...);

/**
 * _putchar - writes the character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */
int _putchar(char c);

#endif
