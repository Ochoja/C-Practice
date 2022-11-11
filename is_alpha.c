#include <stdio.h>

int isalpha(char letter)
{
	if (letter >= 'A' && letter <= 'Z')
		return (1);
	else if (letter >= 'a' && letter <= 'z')
		return (1);
	else
		return (0);
}
