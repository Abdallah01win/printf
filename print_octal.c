#include "main.h"

/**
 * print_octal - prints a unsigned number
 * @num: a given integer
 * Return: length of octal
 */
int print_octal(unsigned int num)
{
	char buffer[20];
	int len = 0, i;

	if (num == 0)
	{
		print_char('0');
		return (1);
	}

	while (num > 0)
	{
		buffer[len++] = ('0' + num % 8);
		num = num / 8;
	}

	for (i = len - 1; i >= 0; i--)
	{
		print_char(buffer[i]);
	}

	return (len);
}
