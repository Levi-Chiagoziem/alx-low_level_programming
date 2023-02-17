#include <stdio.h>
/**
 *main - a program that prints numbers in base 16 in lowercase.
 *
 *Return: Always 0
 **/

int main(void)
{
	char hex;

	for (hex = '0'; hex <= '9'; hex++)
	{
		putchar(hex);
	}

	for (hex = 'a'; hex <= 'g'; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
