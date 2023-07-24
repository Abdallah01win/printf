#include "main.h"

/**
 * print_unsigned_decimal - prints a unsigned integer
 * @num: a given integer
 * Return: length of integer
 */
int print_unsigned_decimal(unsigned int num)
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
		buffer[len++] = ('0' + num % 10);
		num = num / 10;
	}

	for (i = len - 1; i >= 0; i--)
	{
		print_char(buffer[i]);
	}

	return (len);
}
