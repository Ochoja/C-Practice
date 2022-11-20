#include <stdio.h>

/**Function prototype*/
int is_lower(char);

/**
 * main - main function
 * Return: Always 0
 */
int main(void)
{
	int check;

	check = is_lower('a');

	if (check == 1)
		printf("Argument is lowercase\n");
	else
		printf("Argument is uppercase\n");

	return (0);
}

/**
 * is_lower - returns 1 if argument is lowercase, 0 otherwise
 * @arg: argument
 * Return: 1 or 0
 */
int is_lower(char arg)
{
	if (arg >= 'a' && arg <= 'z')
		return (1);
	else
		return (0);
}
