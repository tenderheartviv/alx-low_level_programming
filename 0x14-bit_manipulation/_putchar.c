#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The chararcter to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and erroe is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
