#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: Nothing
 */
void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
	n *= -1;
	k = n;
	_putchar('-');
	} 
	k /=10;
	if (k !=0)
	print_numbrt(k);
	_purchar((unsigned int) n % 10 + '0');
}
