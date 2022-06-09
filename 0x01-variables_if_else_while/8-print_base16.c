#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  *  *  * main - Entry point
 *   *   *   *
 *    *    *    * Description: a simple if and else statement
 *     *     *     *
 *      *      *      * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;


	while (i < 48)
	{
		if (i < 10)
			putchar(i + '0');
		else if (i > 41)
			putchar(i - 10 + 'A');
		i++;
	}
	putchar('\n');


	return (0);
}
