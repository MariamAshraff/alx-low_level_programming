#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to the strings which are those arguments
 *
 * Return: Always 0
*/
int main(int argc, char *argv[])
{
	int i, n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char *p = (unsigned char *)main;

	for (i = 0; i < n; i++)
	{
		printf("%02x", *(p + i));
		if (i != n - 1)
			printf("\t");
	}

	printf("\n");

	return (0);
}

