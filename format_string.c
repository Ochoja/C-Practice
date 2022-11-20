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
 * @name1: First name
 * @name2: Last name
 * @age: age
 * Return: void
 */
void my_string_formatting(char *name1, char *name2, int age)
{
	printf("Hello, my name is %s %s, I'm %d\n", name1, name2, age);
}
