#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - Concatenates two strings.
 *
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the newly allocated memory containing the concatenated
 *         string or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	new_str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (new_str == NULL)
		return (NULL);

	for (; i < len1; i++)
		new_str[i] = s1[i];

	for (; j < len2; j++)
		new_str[i + j] = s2[j];

	new_str[i + j] = '\0';

	return (new_str);
}
