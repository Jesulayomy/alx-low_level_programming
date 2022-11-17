#include "variadic_functions.h"

/**
 * print_numbers - prints numbers in order
 * @separator: the char to add between them
 * @n: the number of arguments to print
 *
 * Return: nothing, its void bozo
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (separator && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
