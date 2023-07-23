#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int number = -1000003;
	char character = 'A';
	const char* string = "Hello, World!";
	_printf("Integer: %d Character: %c String: %s %%\n", number, character, string);
	
	return (0);
}
