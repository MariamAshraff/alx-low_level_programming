#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: size of the array to be created
 * @c: character to initialize each element of the array with
 *
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);

	if (arr == NULL || size == 0)
		return (NULL);

	while (size--)
		arr[size] = c;

	return (arr);
}
