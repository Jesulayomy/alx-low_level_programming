#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}

/**
 * read_textfile - reads text from a file
 * @filename: file to be read
 * @letters: amount of chars to be read
 *
 * Return: the number of letters printed or appropriate error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d, i;
	size_t j;
	char *text;

	text = malloc(sizeof(char) * letters);

	if (!filename || !text)
		return (0);

	file_d = open(filename, O_RDONLY);

	if (file_d < 0)
		return (0);

	i = read(file_d, text, letters);

	if (i <= 0)
		return (0);

	for (j = 0; j < letters; j++)
	{
		if (text[j] == 0)
			return (j);

		_putchar(text[j]);
	}

	close(file_d);

	return (j);
}
