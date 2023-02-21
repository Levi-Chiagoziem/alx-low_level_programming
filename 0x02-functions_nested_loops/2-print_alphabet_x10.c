#include "main.h"
/**
 * print_alphabet_x10 - check the code
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int num = 0;

	while (num < 10)
	{
		char alph = 'a';
			while (alph <= 'z')
			{
				_putchar(alph);
				alph++;
			}
		_putchar('\n');
		num++;
	}
}
