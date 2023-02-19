#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit number of bas 10
 * starting from 0, followed by a new line.
 * return: always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putrchar('\n');
	return (0);

}
