#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabets ten times
 *
 * Return: Always (0)
 */
void print_alphabet_x10(void)
{
	char i;
	char x;

	for (i = 'a'; i <= 'z'; i++)
	{
		x = i * 10;
		_putchar(x);
	}
	_putchar('\n');
}
