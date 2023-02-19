#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: write a program that prints all possible
 * different combination of two digits
 * Number must be separated by ,, followed by a space
 * the two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1 
 * print only the smallest combination of the two digits 0 and 1
 * Number should be printed in ascending order, with two digits
 * you can only use the putchar function
 * (every other function (printf, puts, etc..) is forbidden) 
 * you can only use putchar five times maximumin your code
 * you are not allowed to use any variaties of type char
 * All your code should be in the main function
 * return:0
 */
int main(void)
{
	int c;
	int d = 0;

	while (d < 10)
	{
		c = 0;
		while (c < 10)
		{
			if (d != c && d< c)
			{
				putchar('0' + d);
				putchar('0' + c);

				if (c + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			C++;
		}
		C++;
	
	}
	putchar('\n');
	return(0);
}


