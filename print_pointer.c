#include "main.h"
#include <stdint.h>
/**
 * print_integer - prints address of a given pointer
 * @ptr: a given pointer
 * Return: length of pointer
 */

int print_pointer(const void *ptr)
{
	int counter = 0;
	uintptr_t pointer_value = (uintptr_t)ptr;
	char buff[16];
	int index = 14;

	if (ptr == NULL)
	{
		return print_string("(null)");
	}

	counter += print_char('0');
	counter += print_char('x');
	buff[15] = '\0';

	for (; pointer_value > 0; pointer_value /= 16, index--)
	{
		int rem = pointer_value % 16;
		char elem;

		if (rem < 10)
		{
			elem = rem + '0';
		}
		else
		{
			elem = rem - 10 + 'a';
		}

		buff[index] = elem;
	}
	counter += print_string(index + 1 + buff);
	return (counter);
}
