#include <stdio.h>

/**Function Declaration/Prototype**/
char *my_upcase(char *);

/**
 * main - main function
 * Return: always 0
 */
int main(void)
{
	char *str = "hello";
	char *newString = my_upcase(str);

	printf("Old string: %s\n", str);
	printf("New string: %s\n", newString);

	return (0);
}

/**
 * my_upcase - returns string in uppercase
 * @str: string argument
 * Return: char pointer
 */
char *my_upcase(char *str)
{
	char temp[100];
	int i = 0;
	char *newString = temp;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			temp[i] = str[i] - 32;
		i++;
	}

	temp[i] = '\0';

	return (newString);
}
