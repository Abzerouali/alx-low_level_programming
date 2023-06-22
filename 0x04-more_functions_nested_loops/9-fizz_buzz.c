#include <stdio.h>

/**
*main - Entry point
*Description :a program that prints the numbers from 1 to 100.
* Return: 0
*/

int main(void)
{
	int a = 1;

	do {
			if (a % 3 == 0 && a % 5 == 0)
			{
				printf("FizzBuzz");
			}
			else if (a % 5 == 0)
			{
				printf("Buzz");
			}

			else if (a % 3 == 0)
			{
				printf("Fizz");
			}
			else
			{
				printf("%d", a);
			}
		if (a != 100)
			printf(" ");
		a++;
	} while (a <= 100);
	printf("\n");
	return (0);
}
