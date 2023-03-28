#include "main.h"
/**
 * print_rev- prints a string rev.
 * @s: pointer to print the string rev.
 */
void print_rev(char *s)
{
	int i, j, l;

	for (i = 0; str[i] != '\0'; i++)
	{
		l++;
	}

	for (i = l - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}


	_putchar('\n');
}
