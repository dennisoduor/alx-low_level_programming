/*
 * file: 1-alphabet.c
 * auth: Dennis Oduor
 */
# include "main.h"
/**
 *  print_alphabet- Write a function that prints the alphabet,
 *  in lowercase, followed by a new line.
 *  Return: Always 0.
*/
void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
		_putchar(n);

	_putchar('\n');
}
