#include <unistd.h>
#include <stdio.h>

/**
 * main - prints "and that piece of art is useful"
 * - Dora Korpar, 2015-10-19
 * Return: 0 always
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 61);
	return (1);
}
