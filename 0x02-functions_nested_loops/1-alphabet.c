#include "main.h"

/**
   *print_alphabet - This function prints the alphabet using putchar
   *
   *Return: This function returns 0 on success
   */

void print_alphabet(void)
{
	int i = 65;
	
	while (i <= 90)
	{
		_putchar(i);
		++i;
	}

	return;
}
