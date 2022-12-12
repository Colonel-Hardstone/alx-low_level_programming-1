#include <stdio.h>
#include "function_pointers.h"

/**
 *array_iterator- Function that executes a parameter on an array.
 *@array : Array function is executed on.
 *@size : size of array.
 *@action : a pointer to function that is used.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n;

	n = 0;
	while (n < size)
	{
		action(array[n]);
		n++;
	}
}
