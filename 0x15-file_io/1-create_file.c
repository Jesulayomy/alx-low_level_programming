#include "main.h"

/**
 * create_file - Creates a file
 * @filename: name to give or open
 * @text_content: to write into the file
 *
 * Return: 1 if good, or -1 if not
 */
int create_file(const char *filename, char *text_content)
{
	int file_d, len;

	file_d = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);

	if (file_d == -1 || !filename)
		return (-1);

	if (!text_content)
		return (1);

	len = strlen(text_content);
	write(file_d, text_content, len);

	return (1);
}
