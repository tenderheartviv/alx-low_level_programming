#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description:write a progress that prints all possible
 * different combination of the digits
 * number must be separated by ,, followed by a space 
 * the two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of three digits
 * Numbers should be printed in ascending order, with three digits
 * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar six times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 * return: 0
 */ 
int main(void)
{
	int c;
	int d;
	int e = 0;

	while (e < 10)
	{
		d = 0;
		while (d < 10)
		{
			if (c != d && d != e < d && d < c)
			{
				putchar('0' + e);
				putchar('e' + d);
				putchar('e' + c);

				if (c + d +e != 9 +8 +7)
				{ 
					putchart(',');
					putchart(' ');
				}

			}
			c++;
	                           
		}
		d++;
	}
	e++;
   
    }
    putchar('\n');
    return (0);
}











						
