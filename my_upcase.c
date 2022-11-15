#include <stdio.h>

void my_upcase(char *);

int main(void)
{
	char* str = "hello";

	printf("Old string: %s\n", str);

	my_upcase(str);
	return (0);
}

void my_upcase(char *word)
{
	char newString[] = "";
	int i = 0;

	while (word[i])
	{
	        newString[i] = word[i] - 32;
		printf("%c\n", newString[i]);
		i++;
	}

	newString[i] = '\0';
}
