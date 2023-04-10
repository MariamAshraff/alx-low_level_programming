#include "main.h"
/**
 * *_strspn - gets the length of a prefix substring
 * @s: string1
 * @accept: string2
 *
 * Return: the number of bytes in the initial segment
 * of S which consist only of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k, flag;

	k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (k);
		}
	}

	return (0);
}