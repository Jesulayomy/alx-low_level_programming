#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: 2nd string
 * @n: number of chars to copy from s2
 *
 * Return: 0 at successful exit
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s3 = malloc(sizeof(char) * (strlen(s1) + n + 1));

	if (s3 == NULL)
		return (NULL);

	for (i = 0; s1 != '\0'; i++)
		s3[i] = s1[i];

	for (j = 0; j < n && s2[j] != '\0'; j++)
		s3[i + j] = s2[j];

	for (; j < n; j++)
		s3[i + j] = '\0';

	s3[i + j] = '\0';

	return (s3);
}
