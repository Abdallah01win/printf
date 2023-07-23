#include "main.h"

/**
 * handle_format_specifier - detects format of data
 * @format: string parameter
 * @args: arguments
 * Return: length of format
 */

int handle_format_specifier(char format, va_list args)
{
	switch (format)
	{
		case 'c':
			return (print_char((char)va_arg(args, int)));
		case 's':
			return (print_string(va_arg(args, const char*)));
		case 'd':
		case 'i':
			return (print_integer(va_arg(args, int)));
		case '%':
			return (print_char('%'));
		default:
			print_char('%');
			print_char(format);
			return (2);
	}
}
