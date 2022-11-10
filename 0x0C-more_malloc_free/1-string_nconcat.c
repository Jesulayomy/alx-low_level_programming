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
	unsigned int i, j, k, l;

	if (s1 == NULL)
		k = 0;
	else
		k = strlen(s1);

	if (s2 == NULL)
		l = 0;
	else
		l = strlen(s2);

	s3 = malloc(sizeof(char) * (k + n + 1));

	if (s3 == NULL)
		return (NULL);

	for (i = 0; i < k; i++)
		s3[i] = s1[i];

	for (j = 0; j < n && l != 0; j++)
	{
		s3[i + j] = s2[j];
		if (s2[j + 1] == '\0')
		{
			j++;
			break;
		}
	}

	for (; j < n; j++)
		s3[i + j] = '\0';

	s3[i + j] = '\0';

	return (s3);
}
