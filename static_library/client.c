#include <stdio.h>
#include "server.h"
#define SUM(a,b) (a + b)

/**
 * main - main function
 * Return: 0
 */
int main()
{
	printf("hey there, welcome to ");
	greetings();
	printf("\n%d\n", SUM(5,6));
	return 0;
}
