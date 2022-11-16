#include <stdio.h>
#include "function_pointers.h" 

/**
  *print_name - Function that prints a name.
  *@name: name of person.
  *@f: function that prints name.
  *
  *Return: Function returns nothing.
  */

void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
	{
		f(name);
	}
}
