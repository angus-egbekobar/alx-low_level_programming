#include "main.h"
#include <stdio.h>
/**
 * reverse_array -reverses the content of an array of integers
 * @a: array to be compared.
 * @n: size of array.
 * Return: reversed array.
 */
void reverse_array(int *a, int n)
{
	int swap, c, z;

	c = 0;
	z = n - 1;
	while (c < z)
	{
		swap = *(a + c);
		*(a + c) = *(a + z);
		*(a + z) = swap;
		c++;
		z--;
	}
}
