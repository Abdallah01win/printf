#include "main.h"

/**
 * print_string - prints a given string
 * @str: a pointer of string
 */

void print_string(const char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
}
