#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @r: the input number as an integer
 *
 * Return: value of the last digit
 */
int print_last_digit(int r)
{
	int l;

	l = r % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
