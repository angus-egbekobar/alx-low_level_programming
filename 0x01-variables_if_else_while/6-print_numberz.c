#include <stdio.h>

/**
 * main - a function that prints 0 - 9
 *
 * Return: always 0 when successful
 *
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
