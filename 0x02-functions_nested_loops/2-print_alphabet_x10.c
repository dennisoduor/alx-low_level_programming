/*
 * file: 2-print_alphabet_x10.c
 * auth: Dennis Oduor
 */
# include "main.h"
/**
 *  print_alphabet_x10-Write a function that prints 10 times the alphabet,
 *  in lowercase, followed by a new line.
 *  Return: Always 0.
*/
void print_alphabet_x10(void)
{
	char n;
int i;
for (i = 0; i < 10; i++)
{
	for (n = 'a'; n <= 'z'; n++)
		_putchar(n);

	_putchar('\n');
}
}
