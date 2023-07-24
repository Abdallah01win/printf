#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

int _printf(const char *format, ...);
int handle_format_specifier(char format, va_list args);
int print_string(const char *str);
int print_char(char c);
int print_integer(int num);
int print_pointer(const void *ptr);
int print_hexadecimal(unsigned int num, int uppercase);
int print_unsigned_decimal(unsigned int num);
int print_octal(unsigned int num);

/**
 * _putchar - writes the character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */

int _putchar(char c);

#endif
