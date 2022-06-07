#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 *  * _putchar - writes the character c to stdout
 *   * @c: The character to print
 *    *
 *     * Return: On success 1.
 *      * On error, -1 is returned, and errno is set appropriately.
 *       */


int main(void)
{
	        char x[10] =" _putchar";
		int i = 0;

		for (i = 0; i<9; i++)
		{
			_putchar(x[i]);
		}
		_putchar('\n');

		return (0);
}

