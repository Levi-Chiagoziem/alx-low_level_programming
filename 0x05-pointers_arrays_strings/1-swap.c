#include "main.h"
/**
 * swap_int - function
 * @a: first pointer
 * @b: second pointer
 * returns: nothing
 **/

void swap_int(int *a, int *b)
{
int ptr = *a;
*a = *b;
*b = ptr;
}
