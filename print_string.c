#include "main.h"

/**
 * print_string - prints a given string
 * @str: a pointer of string
 * Return: length of string
 */

int print_string(const char *str)
{
	int count;

	if (str == NULL)
	{
		const char *nullStr = "(null)";

		while (*nullStr != '\0')
		{
			count += print_char(*nullStr);
			nullStr++;
		}
		return (count);
	}

	count = 0;
	while (*str != '\0')
	{
		count += print_char(*str);
		str++;
	}
	return (count);
}
