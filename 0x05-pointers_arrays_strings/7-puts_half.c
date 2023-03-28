#include "main.h"
/**
 *puts_half - prints half of a string, followed by a new line.
 * @str: string imp.
 */
void puts_half(char *str)
{
	int j, i = 0;


	while (str[i])
	{
		i++;
	}

	for (j = i / 2; j < i; j++)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
