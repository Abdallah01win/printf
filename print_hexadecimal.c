#include "main.h"

/**
 * print_hexadecimal - converts a number to hexa
 * @num: a given number
 * @uppercase: param 1 uppercase 0 lowercase
 * Return: length of hexadecimal
 */
int print_hexadecimal(unsigned int num, int uppercase)
{
	char buffer[20];
	int len = 0, i;
	const char *hex_chars;

	if  (uppercase == 1)
	{
		hex_chars = "0123456789ABCDEF";
	} else
	{
		hex_chars = "0123456789abcdef";
	}

	if (num == 0)
	{
		print_char('0');
		return (1);
	}

	while (num > 0)
	{
		buffer[len++] = hex_chars[num % 16];
		num = num / 16;
	}

	for (i = len - 1; i >= 0; i--)
	{
		print_char(buffer[i]);
	}

	return (len);
}
