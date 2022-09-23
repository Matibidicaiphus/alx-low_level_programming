#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int c1 = 0, c2 = 0, p, g, dn1, dn2, add = 0;

	while (*(n1 + c1) != '\0')
		c1++;
	while (*(n2 + c2) != '\0')
		c2++;
	if (c1 >= c2)
		g = c1;
	else
		g = c2;
	if (size_r <= g + 1)
		return (0);
	r[g + 1] = '\0';
	c1--, c2--, size_r--;
	dn1 = *(n1 + c1) - 48, dn2 = *(n2 + c2) - 48;
	while (g >= 0)
	{
		p = dn1 + dn2 + add;
		if (p >= 10)
			add = p / 10;
		else
			add = 0;
		if (p > 0)
		*(r + g) = (p % 10) + 48;
		else
			*(r + g) = '0';
		if (c1 > 0)
			c1--, dn1 = *(n1 + c1) - 48;
		else
			dn1 = 0;
		if (c2 > 0)
			c2--, dn2 = *(n2 + c2) - 48;
		else
			dn2 = 0;
		g--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
