#include <stdio.h>
#include <stdlib.h>

/**
* main - Displays the hexadecimal representation of main's code.
* @argc: Number of command-line arguments.
* @argv: Array of pointers to command-line arguments.
* Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int num;
	char *ptr;
	int index;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num = atoi(argv[1]);

	if (num <= 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (char *)main;

	for (index = 0; index < num && (void *)(ptr + index) != NULL; index++)
	{
		printf("%02x ", ptr[index] & 0xff);
	}

	printf("\n");
	return (0);
}

