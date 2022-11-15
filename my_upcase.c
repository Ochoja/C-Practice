#include <stdio.h>

char *my_upcase(char *);

int main(void)
{
	char *str = "hello";
	char *newStr = my_upcase(str);

	printf("Old string: %s\n", str);
	printf("New string: %s\n", newStr);

	return (0);
}

char *my_upcase(char *str)
{
	char *newStr = "";
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			newStr[i] = str[i] - 32;
		}
		i++;
	}

	newStr[i] = '\0';

	return (newStr);
}
