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
        int y = 32;
        int z = 44;
        
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
