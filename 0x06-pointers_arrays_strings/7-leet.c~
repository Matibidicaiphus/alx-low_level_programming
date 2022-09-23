#include "main.h"
#include <stdio.h>

/**
 * leet - function to encodes a string into 1337
 * @s: input string.
 * Return: the pointer to dest.
 */

char *leet(char *s)
{
	int count = 0, i;
	int low_l[] = {97, 101, 111, 116, 108};
	int upp_l[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == low_l[i] || *(s + count) == upp_l[i])
			{
				*(s + count) = num[i];
				break;
			}
		}
		count++;
	}

	return (s);
}
