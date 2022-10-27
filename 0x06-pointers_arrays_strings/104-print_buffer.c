#include "main.h"

/**
 * print_buffer - buffer gets printed
 * @b: The buffer
 * @size: buffer size
 */

void print_buffer(char *b, int size)
{
	int x, y;

	x = 0;
	if (size <= 0)
		putchar('\n');
	else
	{
		while (x < size)
		{
			printf("%08x: ", x);
			y - 0;
			while (y < 10)
			{
				if (y % 2 == 0 && y > 0)
					printf(" ");
				if (y + x > size - 1)
					printf(" ");
				else
					printf("%.2x", b[y + x]);
				y++;
			}
			putchar(' ');
			y = 0;
			while (y < 10)
			{
				if (y + x > size - 1)
					break;
				if (b[y + x] >= ' ' && b[y + x] <= '~')
					putchar(b[y + x]);
				else
					putchar('.');
				y++;

			}
			putchar('\n');
			x += 10;
		}
	}
}
