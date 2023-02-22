#include <stdio.h>

/**
 * main - Prints numbers.
 *
 * Return: Always 0(success)
 */
int main(void)
{
	char n[10] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(n[i]);
	}
	putchar('\n');
	return (0);
}
