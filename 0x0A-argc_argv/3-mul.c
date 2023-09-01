#include <stdio.h>
#include "main.h"

/**
 * _stoi - convert string to  integer
 * @s: the string to  converted
 * Return: the  converted integer
 */
int _stoi(char *s)
{
	int x, y, n, len, f, digit;

	x = 0;
	y = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (x < len && f == 0)
	{
		if (s[x] == '-')
		{
			++y;
		}

		if (s[x] >= '0' && s[x] <= '9')
		{
			digit = s[x] - '0';
			if (y % 2)
			{
				digit = -digit;
			}
			n = n * 10 + digit;
			f = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
			{
				break;
			}
			f = 0;
		}
		x++;
	}

	if (f == 0)
	{
		return (0);
	}

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: 0 if Success, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int res, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _stoi(argv[1]);
	num2 = _stoi(argv[2]);
	res = num1 * num2;

	printf("%d\n", res);

	return (0);
}
