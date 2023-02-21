#include "main.h"
/**
 *main - Entry point
 *
 *Return: - Always 0
 **/

int main(void)
{
	char alph[] = "_putchar";
	int a;

	for (a = 0; a < 8; a++)
	{
		_putchar(alph[a]);
	}
	_putchar('\n');

	return (0);
}
