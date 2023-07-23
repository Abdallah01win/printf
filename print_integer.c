#include "main.h"
/**
 * int_length - count length of a given integer
 * @num: a given number
 * Return: length integer
 */

int int_length(int num)
{
	int length = 0;

	if (num == 0)
	{
		return (1);
	} else if (num < 0)
	{
		length++;
		num = -num;
	}
	while (num > 0)
	{
		length++;
		num /= 10;
	}
	return (length);
}


/**
 * print_integer - prints a given number
 * @num: a given number
 * Return: length of integer
 */

int print_integer(int num)
{
	int count = 0;
	char buffer[20];
	int i;
	int length = int_length(num);
	int index = length - 1;

	if (num < 0)
	{
		count += print_char('-');
		num = -num;
	}

	if (num == 0)
	{
		buffer[index--] = '0';
	} else
	{
		while (num > 0)
		{
			buffer[index--] = (num % 10) + '0';
			num /= 10;
		}
	}

	for (i = 0; i < length; i++)
	{
		count += print_char(buffer[i]);
	}

	return (count);
}
