#include <stdio.h>

/** Function prototype/declaration **/
void my_string_formatting(char *, char *, int);

/**
 * main - main function
 * Return: Always 0
 */
int main(void)
{
	my_string_formatting("John", "Doe", 23);
	return (0);
}

/**
 * my_string_formatting - Print a string composed value
 * @param_1: First name
 * @param_2: Last name
 * @param_3: age
 * Return: void
 */
void my_string_formatting(char *param_1, char *param_2, int param_3)
{
	printf("Hello, my name is %s %s, I'm %d\n", param_1, param_2, param_3);
}
