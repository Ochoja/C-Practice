#include <stdio.h>

/**
 * isalpha - return 1 if argument is a letter, 0 otherwise
 * @letter: argument
 * Return: 0 or 1
 */
int isalpha(char letter)
{
	if (letter >= 'A' && letter <= 'Z')
		return (1);
	else if (letter >= 'a' && letter <= 'z')
		return (1);
	else
		return (0);
}
