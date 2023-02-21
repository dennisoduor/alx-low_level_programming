/*
 * file: 5-sign.c
 * auth: Dennis Oduor
 */
# include "main.h"
/**
 *  print_sign-Write a function that prints the sign of a number.
 *  Returns 1 and prints + if n is greater than zero
 *  Returns 0 and prints 0 if n is zero
 *  Returns -1 and prints - if n is less than zero
 *  @n: the character to be checked
 *  Return: Always 0.
*/
int print_sign(int n)
{
	if (n > 0)
		_putchar('+');
		return (1);
	else if (n == 0)
		_putchar('0');
		return (0);
	else if (n < 0)
		_putchar('-');
		return (-1);
}
