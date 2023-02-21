#include "main.h"
/**
 * main - Entry point
 *
 * Return - Always 0 (success)
 **/

int main(void)
{
	char alph[] = "_putchar";
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(alph[a]);
	}
	_putchar('\n');

	return (0);
}
