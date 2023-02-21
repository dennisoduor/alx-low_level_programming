/*
 * File: 101-natural.c
 * Auth: Dennis Oduor
 */

#include <stdio.h>

/**
 * main- Write a program that computes and prints the sum
 * of all the multiples of 3 or 5 below 1024 (excluded),
 * followed by a new line.
 * Return: Always 0.
 */

int main(void)
{
	int limit = 1024;
	int sum = 0;
	int i;

	for (i = 1; i < limit; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}

