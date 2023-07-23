#include "main.h"

/**
 * print_integer - prints a given number
 * @num: a given number
 */


void print_integer(int num)
{

	char buffer[10];
	int idx = 0;

	if (num == 0)
	{
		_putchar('0');
		return;
	}

	while (num > 0)
	{
		buffer[idx++] = '0' + (num % 10);
		num /= 10;
	}

	while (idx > 0)
	{
		_putchar(buffer[--idx]);
	}
}

