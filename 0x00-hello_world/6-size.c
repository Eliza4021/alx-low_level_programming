#include<stdio.h>
/**
 * main - entry point
 * Descripion: prints size
 * Return: Always 0 (success)
 */
int	main(void)
{
	printf("size of a char: %d byte(s)\n", sizeof(char));
	printf("size of a int: %d byte(s)\n", sizeof(int));
	 printf("size of a long int: %d byte(s)\n", sizeof(long int));
	 printf("size of a long long int: %d byte(s)\n", sizeof(long long int));
	  printf("size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}