#include "main.h"

/**
   *print_alphabet_x10 - This function prints the alphabet using putchar
   *
   *Return: This function returns 0 on success
   */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		++i;

	}

	int nl = 10;

	_putchar(nl);
	i++;

	}

}
