#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  *  *  * main - Entry point
 *   *   *   *
 *    *    *    * Description: determines the last digit of a number
 *     *     *     *
 *      *      *      * Return: Always 0 (Success)
 */

int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
