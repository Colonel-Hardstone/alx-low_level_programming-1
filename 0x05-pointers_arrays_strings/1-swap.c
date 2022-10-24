#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * 
 * @a: first integer
 * @b: second integer
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int p;
	
	p = &a;
	*p = *b;
	*b = p;
}
