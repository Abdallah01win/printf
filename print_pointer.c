#include "main.h"
#include <stdint.h>
/**
 * print_pointer - prints address of a given pointer
 * @ptr: a given pointer
 * Return: length of pointer
 */

int print_pointer(const void *ptr)
{
	int counter = 0;
	char elem;
	uintptr_t pointer_value = (uintptr_t)ptr;
	char buff[16];
	int index = 14;

	counter += print_char('0');
	counter += print_char('x');
	buff[15] = '\0';

	do {
		int rem = pointer_value % 16;

		if (rem < 10)
		{
			elem = rem + '0';
		}
		else
		{
			elem = rem - 10 + 'a';
		}
		buff[index] = elem;
		pointer_value /= 16;
		index--;
	} while (pointer_value > 0);

	counter += print_string(index + 1 + buff);

	return (counter);
}

