#include "main.h"
/**
 *int _islower(int c) - function
 *
 * Return: Always 0
 */
int _islower(int c);
{
	char c;

	if (c >= 'a' && c < 'z')
		return (1);
	else
		return (0);
}
