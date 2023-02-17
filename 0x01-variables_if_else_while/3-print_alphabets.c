#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: 0
 **/
int main(void)
{
	char lower, upper;
	for (lower = 'a'; lower <='z'; lower++)
	{
		putchar(lower);
	}

	for (upper = 'A'; upper <='Z'; upper++)
	{
		putchar(upper);
	}

	return (0);

}		
