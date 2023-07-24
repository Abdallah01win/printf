#include "main.h"

/**
 * handle_format_specifier - detects format of data
 * @format: string parameter
 * @args: arguments
 * Return: length of format
 */

int handle_format_specifier(char format, va_list args)
{
	int d, c;
	switch (format)
	{
		case 'c':
			return (print_char((char)va_arg(args, int)));
		case 's':
			return (print_string(va_arg(args, const char*)));
		case 'd':
		case 'i':
			return (print_integer(va_arg(args, int)));
		case 'p':
			return (print_pointer(va_arg(args, const void *)));
		case '%':
			return (print_char('%'));
		default:
			c = print_char('%');
			d = print_char(format);
			return (c + d);
	}
}
