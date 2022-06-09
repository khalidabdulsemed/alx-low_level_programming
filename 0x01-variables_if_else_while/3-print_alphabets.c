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
	char a = 'a';
	char A = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (A <= 'Z')
	{
		putchar(A);
		A++;
	}
	putchar('\n');

	return (0);
}
