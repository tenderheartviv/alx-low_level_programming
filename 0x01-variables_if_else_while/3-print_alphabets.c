#include <stdio.h>
#include <stdlib.h>
/**
 *    main - Entry block
 *    Description: Get a random it with 5
 *    Return: Always 0 
 */
 int main(void)
 {
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		
		putchar(lower)    				
	        
	        lower++;
	}

	while (upper <= 'Z')
	{
		putchar(upper);

		upper++;
	}

	putchar('\n');
	return (0);
}
