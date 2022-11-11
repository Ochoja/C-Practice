#include "headerfile.h"

/**
 * islower - returns 1 if argument is lowercase, 0 otherwise
 * @arg: argument
 * Return: 1 or 0
 */

int islower(char arg)
{
	if (arg >= 'a' && arg <= 'z')
		return (1);
	else
		return (0);
}
