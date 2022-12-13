#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
  *main - A program that performs simple operations.
  *@argc: Argument count.
  *@argv: Argument vector.
  *Return: 0 on sucessful exit.
  */

int main(int argc, char **argv)
{
	int num1, num2, res;
	char *ope;
	int (*op)(int, int);

	if (argc == 4)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		ope = argv[2];
		op = get_op_func(argv[2]);

		if (op == NULL)
		{
			printf("Error");
			exit(99);
		}
		else if ((*(ope) == '%' || *(ope) == '/') && num2 == 0)
		{
			printf("Error");
			exit(100);
		}
		res = op(num1, num2);
		printf("%d\n", res);
	}

	printf("Error");
	exit(98);
}
