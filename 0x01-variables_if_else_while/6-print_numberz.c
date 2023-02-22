#include <stdio.h>
#include <ctype.h>
/**
*main - Prints all single digits of base 10 followed by new line
*
*Return: Always 0(success)
*/

int main(void)
{
	int z;

	for (z = '0'; z <= '9'; z++)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
