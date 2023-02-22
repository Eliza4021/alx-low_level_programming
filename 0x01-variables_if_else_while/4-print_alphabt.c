#include <stdio.h>
/**
 * main - Prints alphabet without e q.
 *
 * Return: Always 0(success)
 */

int main(void)
{
	char q[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(q[i]);
	}
	putchar('\n');
	return (0);
}

