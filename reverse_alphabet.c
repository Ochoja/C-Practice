#include "headerfile.h"

/**
 * reverse_alphabet - print alphabets in reverse order
 */
void reverse_alphabet(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		printf("%c", letter);
		letter--;
	}

	printf("\n");
}
