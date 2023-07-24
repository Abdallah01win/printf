#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include "main.h"

/**
 * _printf - prints a given string with identifiers
 * @format: format specifiers
 * Return: length of pointer
 */

int _printf(const char *format, ...)
{
	int count;
	va_list args;

	va_start(args, format);
	count = 0;
	if ((format[0] == '%' && !format[1]) || format == NULL)
	{
		return (-1);
	}

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
				{
					char c = (char)va_arg(args, int);
					count += print_char(c);
					break;
				}
				case 's':
				{
					const char *str = va_arg(args, const char *);
					count += print_string(str);
					break;
				}
				case '%':
				{
					count += print_char('%');
					break;
				}
				default:
					count += print_char('%');
					count += print_char(*format);
					break;
			}

		} else
		{
			count += print_char(*format);
		}
		format++;
	}

	va_end(args);
	return (count);
}
