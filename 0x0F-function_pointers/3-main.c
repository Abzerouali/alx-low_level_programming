#include "3-calc.h"

/**
*main - Entry point of the program.
*@argc: The number of command-line arguments.
*@argv: An array of pointers to the command-line arguments.
*Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	char *op;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	if (num2 == 0 && (*op == '/' || *op == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	func = get_op_func(op);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", func(num1, num2));

	return (0);
}

