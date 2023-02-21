#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description - a function that prints 10 times the alphabet
 * in lowercases followed by a new line
 *
 * Return: void
 *
 */


void print_alphabet_x10(void)
{
	int i = '0';

	while (i <= 10)
	{
		char j = 'a';

		while (j <= 'z')
		{
			_putchar(j);
			j++;

		}

		_putchar(i);
		i++;



	}

}
