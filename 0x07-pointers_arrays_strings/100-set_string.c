#include "main.h"
#include <stdio.h>

/**
 * set_string - function to set the value of a pointer to a char
 * @s: source adress.
 * @to: target adress.
 * Return: no return.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
