#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - prints a given string with identifiers
 * @format:  format specifiers
 */

void _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			handle_format_specifier(*format, args);
		}
		else
		{
			_putchar(*format);
		}

		format++;
	}

	va_end(args);
}
