/*
 * File: 102-fibonacci.c
 * Auth: Dennis Oduor
 */

#include "main.h"
#include <stdio.h>
#define n 50

/**
 * main-Write a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * The numbers must be separated by comma, followed by a space.
 * Return: Always 0.
 */

int main(void)
{
	long int fib[n];
	int i;

	fib[0] = 1;
	fib[1] = 2;

	for (i = 2; i < n; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	for (i = 0; i < n; i++)
	{
		printf("%ld", fib[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
