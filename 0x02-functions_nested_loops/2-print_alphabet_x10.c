#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabets ten times
 *
 * Return: Always (0)
 */
void print_alphabet_x10(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i * 10);
	_putchar('\n');
}
