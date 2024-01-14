#include <stdio.h>

/**
 *main -  prints file name.
 *@argc:  argument count.
 *@argv: argument vector.
 *Return: 0 - Success.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s", argv[0]);
	return (0);
}


