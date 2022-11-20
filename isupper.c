#include <stdio.h>

/** Function Prototype/Declaration **/
int is_upper(char arg);

/**
 * main - main function
 * Return: Always 0
 */
int main(void)
{
	int check = 0;
	check = is_upper('Z');

	if (check == 1)
		printf("Argument is uppercase\n");
	else
		printf("Argument is lowercase\n");

	return (0);
}

/**
 * isupper - return 1 if argument is uppercase, 0 otherwise
 * @arg: argument
 * Return: 0 or 1
 */
int is_upper(char arg)
{
	if (arg >= 'A' && arg <= 'Z')
		return (1);
	else
		return (0);
}
