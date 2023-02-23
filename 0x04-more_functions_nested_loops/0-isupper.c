#include "main.h"
/**
 * _isupper - function
 * @c:Tested character
 * Return: returns 1 if c is uppercase and returs 0 of c is lower case
 */
int _isupper(int c)
{
if ((c <= 'A') && (c >= 'Z'))
return (1);

return (0);
}
