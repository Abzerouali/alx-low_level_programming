#include <stdio.h>
/**
 *input/output operations library for C programming language
 */
#include <unistd.h>
/**
 * main - Entry point of the program
 *
 * Description: main
 * Return: Always 1 
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
