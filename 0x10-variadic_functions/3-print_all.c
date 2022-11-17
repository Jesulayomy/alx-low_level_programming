#include "variadic_functions.h"

/**
 * print_all - prints chars, ints, floats and strings
 * @format: a string containing the formats used
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, n;
	va_list args;
	char *s, cifs[5] = "cifs";

	va_start(args, format);
	while (format && format[i] != 0)
	{
		n = 0;
		while (cifs[n] != '\0')
		{
		if (i != 0 && format[i] == cifs[n])
			printf(", ");
		n++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s)
				{
					printf("%s", s);
					break;
				}
				printf("(nil)");
				break;
		}
		i++;
	}
	printf("\n");
}
