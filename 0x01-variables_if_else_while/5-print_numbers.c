#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 **/
int main(void)
{
	int hex;

	for (hex = 0; hex < 10; hex++)
	{
		printf("%x", hex);
	}
	return (0);
}
