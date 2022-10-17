#include "main.h"

/**
 * _puts - A function that prints a string with a newline
 * @str: paramater for the string to print
 *
 * Return:( str-a)
 */
int _puts(char *str)
{
	char *a = str;/*variable declaration*/

	while (*str)
		_putchar(*str++);
	return (str - a);
}

/**
 * _putchar - A function that writes the character c to stdout
 * @c: Pqramater for the  character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar(int c)
{
	static int i;
	static char buf[OUTPUT_BUF_SIZE];

	if (c == BUF_FLUSH || i >= OUTPUT_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}
