#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;
	char *separator = "";

	print_t prints[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(args, format);

	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (prints[j].c != '\0')
		{
			if (format[i] == prints[j].c)
			{
				printf("%s", separator);
				prints[j].f(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

