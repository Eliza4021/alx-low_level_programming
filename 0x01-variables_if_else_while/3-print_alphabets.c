#include<stdio.h>

/**
 * main - Prints alphabets.
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	char d[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(d[i]);
	}
	putchar('\n');
	return (0);
}
