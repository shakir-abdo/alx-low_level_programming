#include "main.h"
#include <stdio.h>

/**
 * get_bit - get the value of a bit
 * @index: index starting from 0
 * @n: number to evaluate
 * Return: the Value of bit at index, or -1 
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	hold = n >> index;

	return (hold & 1);
}
