#include <stdio.h>
#include "function_pointers.h"

/**
  *array_iterator - Function that excecutes function on array.
  *@array: input array for function.
  *@size: size of array.
  *@action: function to be executed.
  *
  *Return: Function returns nothing.
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	i = 0;

	while (array[i] && i < size)
	{
		action(array[i]);
	}

	i++;
}
