#include "main.h"

/**
 * _strdup - duplicates an array of characters
 * @str: the array to be duplicated
 *
 * Return: a pointer to the array or null
 */
char *_strdup(char *str)
{
	char *strd;

	if (str == NULL)
		return (NULL);

	strd = malloc((sizeof(char) * strlen(str)) + 1);
	if (strd == NULL)
		return (NULL);

	strcpy(strd, str);

	return (strd);
}
