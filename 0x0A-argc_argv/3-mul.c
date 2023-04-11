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
 * main - multiply
 * @argc: number of arguments
 * @argv: array
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int res, num, num1;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num = _atoi(argv[1]);
	num1 = _atoi(argv[2]);
	res = num * num1;

	printf("%d\n", res);

	return (0);
}
