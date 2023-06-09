#include "main.h"
#include <stdio.h>
/**
 * *_strpbrk - searches a string
 * @s: string1
 * @accept: string2
 *
 * Return: pointer to the byte in S that matches one of the bytes in accept
 * or null if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
