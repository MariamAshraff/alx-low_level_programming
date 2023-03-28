#include "main.h"
/**
 *puts_half - prints half of a string, followed by a new line.
 * @str: string imp.
 */
void puts_half(char *str)
{
	int j, i = 0;


	while (s[i])
	{
		i++;
	}

	for (j = 0; j < i / 2; j += 2)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
