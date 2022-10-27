#include "main.h"

/**
 * _strcmp - compares string lengths
 * @s1: compared to
 * @s2: this
 *
 * Return: the value of the comparison
 */

int _strcmp(char *s1, char *s2)
{
	int cs1, cs2;

	for (cs1 = 0; s1[cs1] != '\0'; cs1++)
	{
		;
	}

	for (cs2 = 0; s2[cs2] != '\0'; cs2++)
	{
		;
	}

	if (cs1 == cs2)
	{
		return (0);
	}
	else
	{
		return (s1 - s2);
	}
}
