#include <stdio.h>

/**
 *  *  * main - Entry point
 *   *   *
 *    *    * Description: a simple if and else statement
 *     *     *
 *      *      * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	scanf("%d", &n);
	if (n > 0)
	{
		printf("%d is positive", n);
	} else
	if (n == 0)
	{
		printf("%d is zero", n);
	} else
	if (n < 0)
	{
		printf("%d is negative", n);
	}
	return (0);
}
