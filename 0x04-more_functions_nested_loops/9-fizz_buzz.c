#include "main.h"
#include <stdio.h>

/**
 * main - Prints a Fizz Buzz program
 * Return: Always 0 (Success)
 */

int main(void)
{
	int X;

	for (X = 1; x <= 100; X++)
	{
	if ((X % 3 == 0) + (X % 5 == 0))
	{
	printf("FizzBuzz");
	}
	else if (X % 3 == 0)
	{
	printf("Fizz");
	}
	else if (X % 5 == 0)
	{
	printf("Buzz");
	}
	else
	{
	printf("%d", X);
	}
	if (X != 100)
	{
	printf(" ");
	}
	}
	printf("\n");
	return (0);
}
