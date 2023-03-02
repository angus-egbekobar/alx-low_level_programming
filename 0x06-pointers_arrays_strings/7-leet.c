#include "main.h"
#include <stdio.h>
/**
 * leet - change vowels to numbers.
 * @x: parameter x
 *
 * Return: String with all vowels changed.
 */
char *leet(char *x)
{
	int a = 0, b, l = 5;
	char tr[5] = {'A', 'E', 'O', 'T', 'L'};
	char trw[5] = {'4', '3', '0', '7', '1'};

	while (x[a])
	{
		b = 0;

		while (b < l)
		{
			if (x[a] == tr[b] || x[a] - 32 == tr[0])
				x[a] = trw[b];

			b++;
		}
		a++;
	}
	return (x);
}
