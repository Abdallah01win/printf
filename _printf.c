#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include "main.h"

/**
 * _printf - prints a given string with identifiers
 * @format:  format specifiers
 */

int _printf(const char *format, ...)
{
	int count;

	va_list args;
	va_start(args, format);

	count = 0;

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += handle_format_specifier(*format, args);

		} else 
		{
			count += print_char(*format);
		}
		format++;
	}

	va_end(args);
	return count;
}
