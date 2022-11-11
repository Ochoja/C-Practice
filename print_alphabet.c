#include "headerfile.h"

/**
 * print_alphabet - print alphabets
 */

void print_alphabet(void)
{
	int letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
}
