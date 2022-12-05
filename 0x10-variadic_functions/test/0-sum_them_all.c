#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * sum_them_all - Returns the sums of all its parameters.
  * @n : First number to be added.
  *
  * Return: Sum of parameters.
  */

int sum_them_all(const unsigned int n, ...)
{
	/*
	*checks if first argument is 0 and returns 0
	   */
	while (n)
	{
	va_list nums;
	int i, sum;

	sum = 0;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
	sum += va_arg(nums, int);
	}

	va_end(nums);

	return (sum);
	}

	return (0);
}
