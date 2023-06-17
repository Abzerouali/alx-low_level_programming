#include <stdio.h>
/**
 * main - entry point
 * Description: prints all possible combinations of single-digit numbers.
 * Return: 0
 */
int main(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = i + 1; y < 10; y++)
		{
			for (z = y + 1; z < 10; z++)
			{
				putchar(x + 48);
				putchar(y + 48);
				putchar(z + 48);
					if (x != 7 || y != 8 || z != 9)
					{
					putchar(',');
					putchar(' ');
					}
			}
		}
	}
	putchar('\n');
	return (0);
}
