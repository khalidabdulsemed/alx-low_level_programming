#include "holberton.h"

/**
 *   * print_rev - prints string
 *     * @s: input string
 *       * Return: no return
 */


void print_rev(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		s++;
		c++;
	}

	while (c > 0)
	{
		s--;
		putchar(*s);
		c--;
	}
	putchar('\n');
}
