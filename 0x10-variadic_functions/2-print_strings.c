#include "variadic_functions.h"

/**
 * print_strings - prints strings in order
 * @separator: the char to add between them
 * @n: the number of arguments to print
 *
 * Return: nothing, its void bozo
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j;
	char *str;
	va_list args;

	if (n == 0)
		return;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str)
			printf("%s", str);
		else
			printf("nil");

		j = 0;
		if (separator && i != n - 1)
		{
			while (separator[j] != '\0')
			{
				printf("%c", separator[j]);
				j++;
			}
		}
	}

	va_end(args);

	printf("\n");
}
