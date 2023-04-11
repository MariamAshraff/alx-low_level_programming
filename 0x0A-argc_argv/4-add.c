#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts
 * @s: string
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, di, num, l, flag, digit;

	digit = 0;
	i = 0;
	di = 0;
	num = 0;
	l = 0;
	flag = 0;

	while (s[l] != '\0')
		l++;

	while (i < l && flag == 0)
	{
		if (s[i] == '-')
			++di;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (di % 2)
				digit = -digit;
			num = num * 10 + digit;
			flag = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			flag = 0;
		}
		i++;
	}

	if (flag == 0)
		return (0);

	return (num);
}

/**
 * main - add
 * @argc: number of arguments
 * @argv: array
 *
 * Return: 0 (Success), or 1 (Success)
 */
int main(int argc, char *argv[])
{
	int i, j, k, sum, n;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		n = _atoi(argv[k]);
		if (n >= 0)
		{
			sum += n;
		}
	}

	printf("%d\n", sum);
	return (0);
}
