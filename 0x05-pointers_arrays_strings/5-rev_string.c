#include "main.h"
/**
 * rev_string- prints a string rev.
 * @s: string to be reversed.
 */
void rev_string(char *s)
{
	int len;
	char temp;

	len = strlen(s);

	for (int i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
