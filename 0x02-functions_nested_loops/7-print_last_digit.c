/*
 * file: 7-print_last_digit.c
 * auth: Dennis Oduor
 */
# include "main.h"
/**
 *  print_last_digit-Write a function that prints the last digit of a number.
 *  @x: the value to check
 *  Return: Always 0.
*/
int print_last_digit(int x)
{
	int last_digit = x % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}

