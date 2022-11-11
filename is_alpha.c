#include <stdio.h>

int isalpha(char letter)
{
	if (letter >= 'a' && letter <= 'Z')
		return (1);
	else
		return (0);
}
