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

	int start = i % 2 == 0 ? i / 2 : (i - 1) / 2 + 1;

	for (j = start; j < i; j++)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
