#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: The string to copy.
 *
 * Return: If str is NULL or insufficient memory is available, returns NULL.
 * Otherwise, returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	int size, i;
	char *s;

	size = 0;
	i = 0;

	if (str == NULL)
		return (NULL);

	while (str[size])
		size++;

	s = malloc(size * sizeof(char) + 1);

	if (s == NULL)
		return (NULL);

	for (; i < size; i++)
		s[i] = str[i];

	return (s);
}
