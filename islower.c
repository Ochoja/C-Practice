#include <stdio.h>

/**Function prototype*/
int islower(char);

/**
 * main - main function
 * Return: Always 0
 */
int main(void)
{
	int check;

	check = islower('a');

	if (check == 1)
		printf("Argument is lowercase\n");
	else
		printf("Argument is uppercase\n");

	return (0);
}

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
