#include <stdio.h>

/**
 * isdigit - returns 1 if argument is a digit, 0 otherwise
 * @arg: argument
 * Return: 0 or 1
 */

int isdigit(unsigned int arg)
{
	if (arg >= 0 && arg <= 9)
		return (1);
	else
		return (0);
}
