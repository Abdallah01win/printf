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
static int print_pointer(const void *ptr);

/**
 * _putchar - writes the character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */

int _putchar(char c);

#endif
