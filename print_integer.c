#include "main.h"

/**
 * print_integer - prints a given number
 * @num: a given number
 * Return: length of integer
 */
int print_integer(int num)
{
	int n, digit;
	int digitCount = 1, i = 1, lastDigit = num % 10;

	if (num == 0)
	{
		print_char('0');
		return (1);
	}
	n = num / 10;
	num = n;
	if (lastDigit < 0)
	{
		print_char('-');
		num = -num;
		n = -n;
		lastDigit = -lastDigit;
		digitCount++;
	}

	if (num > 0)
	{
		while (num / 10 != 0)
		{
			i = i * 10;
			num = num / 10;
		}
		num = n;
		while (i > 0)
		{
			digit = num / i;
			print_char(digit + '0');
			num = num - (digit * i);
			i = i / 10;
			digitCount++;
		}
	}
	print_char(lastDigit + '0');
	return (digitCount);
}
