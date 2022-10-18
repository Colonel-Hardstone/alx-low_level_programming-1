#include "main.h"

/**
   *abs - returns the absolute value of a number
   *@n: character to be checked
   *
   *Return: This function returns a postive int number
   */

int abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
