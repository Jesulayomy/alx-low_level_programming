#include "main.h"

/**
 * infinite_add - Add up two numbers stored in given char arrays
 * @n1: The first number
 * @n2: The second number
 * @r: Pointer to the buffer to store result
 * @size_r: The size of the buffer
 * Return: 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int m1, m2, tmpl, rl, i, sum, num1, num2, carry;
	char tmp[10000];

	rl = i = m1 = m2 = sum = num1 = num2 = carry = 0;
	while (n1[m1] != '\0')
		m1++;
	while (n2[m2] != '\0')
		m2++;
	if (m1 + 2 > size_r || m2 + 2 > size_r)
		return (0);
	m1--;
	m2--;
	while (i <= m1 || i <= 12)
	{
		num1 = num2 = 0;
		if (i <= m1)
			num1 = n1[m1 - i] - '0';
		if (i <= m2 && (m2 - i) >= 0)
			num2 = n2[m2 - i] - '0';
		sum = num1 + num2 + carry;
		if (sum >= 10)
		{
			carry = 1;
			sum -= 10;
		}
		else
			carry = 0;
		r[i] = sum + '0';
		i++;
		rl++;

	}
	if (carry > 0)
	{
		r[i] = carry + '0';
		r[i + 1] = '\0';
	}
	i = tmpl = 0;
	while (i <= rl)
	{
		tmp[i] = r[rl - i];
		tmpl++;
		i++;
	}
	i = 0;
	while (i < tmpl)
	{
		if (r[i] == '\0')
		{
			break;
		}
		r[i] = tmp[i];
		i++;
	}
	return (r);
}
