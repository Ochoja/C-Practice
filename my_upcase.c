#include <stdio.h>

/**Function Declaration/Prototype**/
char *my_upcase(char *);

/**
 * main - main function
 * Return: always 0
 */
int main(void)
{
	char *str = "heLlO";
	char *newString = my_upcase(str);

	printf("Old string: %s\n", str);
	printf("New string: %s\n", newString);

	return (0);
}

/**
 * my_upcase - returns string in uppercase
 * @param_1: string argument
 * Return: char pointer
 */
char *my_upcase(char *param_1)
{
	char temp[100];
	int i = 0;
	char *newString = temp;

	while (param_1[i])
	{
		if (param_1[i] >= 'a' && param_1[i] <= 'z')
			temp[i] = param_1[i] - 32;
		else
			temp[i] = param_1[i];

		i++;
	}

	temp[i] = '\0';

	return (newString);
}
