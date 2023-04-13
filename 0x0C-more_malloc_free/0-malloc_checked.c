#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory and checks for NULL
 * @b: Size of memory to allocate
 *
 * Return: Pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	exit(98);

	return (ptr);
}
