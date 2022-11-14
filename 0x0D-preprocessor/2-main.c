#include <stdio.h>
#include "main.h"

/**
  *main - A program prints name of the file compiled from and a new line.
  */

void main(void)
{
	char file[] = __FILE__;

	for (int count = 0; count < 80; count++)
	{
		if (file[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		else
			_putchar(file[count]);
	}
}
