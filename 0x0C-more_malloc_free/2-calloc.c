#include <stdlib.h>
#include "main.h"
/**
 * _calloc - Allocate memory for an array and initialize it to zero
 * @nmemb: The number of elements in the array
 * @size: The size of each element in bytes
 *
 * Return: A pointer to the allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
		return (NULL);

	void *arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	char *ptr = arr;
	unsigned int i;

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (arr);
}
