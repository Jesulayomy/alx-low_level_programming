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
 * create_file - Creates a file 
 * @filename: name to give or open
 * @text_content: to write into the file
 *
 * Return: 1 if good, or -1 if not
 */
int create_file(const char *filename, char *text_content)
{
	

}
