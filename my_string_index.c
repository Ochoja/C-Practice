#include <stdio.h>
#include <stddef.h>

/**Function Declaration/Prototype**/
int my_string_index(char *, char);

/**
 * my_string_index - Returns the position of a char in a string
 * @haystack: String passed to function
 * @needle: character searched for
 * Return: index/position of character, -1 otherwise
 */
int my_string_index(char *haystack, char needle)
{
	int i;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		if (haystack[i] == needle)
			return (i);
	}

	return (-1);
}

/**
 * main - main function
 * Return: always 0
 */
int main(void)
{
	char *str = "helLo";
	int position = my_string_index(str, 'L');

	printf("Position of 'L' in %s is: %d\n", str, position);

	return (0);
}
