#include "main.h"

/**
 * print_string - prints a given string
 * @str: a pointer of string
 * Return: length of string
 */

int print_string(const char *str)
{
	int count;

	count = 0;
	while (*str != '\0')
	{
		count += print_char(*str);
		str++;
	}
	return (count);
}
