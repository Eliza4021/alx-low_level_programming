#include <stdio.h>

/**
 * main - Prints the base sixteen numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s[16] = "0123456789abcdef";
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(s[i]);
	}
	putchar('\n');
	return (0);
}
