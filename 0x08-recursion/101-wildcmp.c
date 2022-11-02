#include "main.h"

/**
 * wildcmp - comparing two strings, string 2 may contain wildcards
 * @s1: string1
 * @s2: string (may cntain *)
 *
 * Return: 1 if identical or 0
 */
int wildcmp(char *s1, char *s2)
{
	/**
	 * this checks if both strings s1 and s2 end together or are blank
	 */
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	/**
	 * compare each element of strings s1 and s2recur if they are the same
	 */
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	/**
	 * checks if the current s2 is a wildcard, then...
	 */
	if (*s2 == '*')
	{
		/**
		 * ... it is not equal if:
		 * *s2 is a wildcard && not the last element && s1 hasnt ended
		 * s1="hel" s2="hel*o" (!=)
		 * once s1 ends, s2 shouldnt have an extra char after *
		 */
		if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		{
			return (0);
		}
		/**
		 * ... is equal if: s1/2 can still be compared.First condition
		 * takes care of exceptions. s1="hello" s2="he*o
		 */
		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
		{
			return (1);
		}
	}

	return (0);
}
