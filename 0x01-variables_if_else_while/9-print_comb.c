
#include <stdio.h>
 
/**
 *  *  *  *  * main - Entry point
 *   *   *   *   *
 *    *    *    *    * Description: a simple if and else statement
 *     *     *     *     *
 *      *      *      *      * Return: Always 0 (Success)
 */   
       
int main(void)
{
        int x = 48;
        char y = 32;
        char z = 44;
        
        while (x < 58)
        {
                putchar(x);
                putchar(z);
                putchar(y);
                x++;
        }
        putchar('\n');

        return (0);
}