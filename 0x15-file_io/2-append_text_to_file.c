#include "main.h"

/**
 * append_text_to_file - adds a text to a file
 * @filename: name of file
 * @text_content: to append
 *
 * Return: 1 on success and -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, i;

	if (!filename)
		return (-1);

	file_d = open(filename, O_WRONLY | O_APPEND);

	if (file_d < 0)
		return (-1);

	if (!text_content)
	{
		close(file_d);
		return (1);
	}

	i = strlen(text_content);
	write(file_d, text_content, i);

	close(file_d);
	return (1);
}
