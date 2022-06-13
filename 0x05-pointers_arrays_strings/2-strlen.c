#include "main.h"
#include <stdio.h>

/**
 *  * _strlen - length of a string
 *   * @s: input char
 *    * Return: length of a string
 */

int len(char *s);
int main(void)
{
	    char *str;
	    int len;

	    str = "My first strlen!";
	    len = len(str);
	    printf("%d\n", len);
}

int len(char *s)
{
	char s;
	int f;
	f = strlen(*s);
}
