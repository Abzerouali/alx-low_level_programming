#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description: prints the program name
 * @argc: parameter represent number of arg
 * @argv: parameter represent arr of arg
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
