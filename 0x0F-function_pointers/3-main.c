#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of pointers to the strings which are those arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	operator = get_op_func(argv[2]);

	if (operator == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", operator(a, b));
	return (0);
}

