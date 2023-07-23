#include "main.h"

/**
 * print_digits_integer - prints digits or integers
 * negative or positive
 * @ptr: a given digit or integer
 * Return: always 0
 */

int print_digits_integer(int ptr)
{
	int d;

	d = ptr;
	if (d < 0)
	{
		_putchar('-');
		d = -d;
	}
	print_integer(d);
	return (0);
}

/**
 * handle_format_specifier - detects format of data
 * @format: string parameter
 * @args: arguments
 */

void handle_format_specifier(char format, va_list args)
{
	switch (format)
	{
		case 'c':
			print_char((char)va_arg(args, int));
			break;
		case 's':
			print_string(va_arg(args, const char*));
			break;
		case '%':
			_putchar('%');
			break;
		case 'd':
		case 'i':
			print_digits_integer(va_arg(args, int));
			break;
		default:
			_putchar('%');
			_putchar(format);
			break;
	}
}
