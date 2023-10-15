#include <stdio.h>

/**
* This function counts a loop of twos'
* Initialized num1, num2
*/

int main()
{
    int num1, num2;
    
    for(num1 = 0; num1 <= 98; num1++)
    {
        for(num2 = num1+1; num2 <=99; num2++)
        {
            putchar(num1/10 + '0');
            putchar(num1%10 + '0');
            putchar(' ');
            
            putchar(num2/10 + '0');
            putchar(num2%10 + '0');
            putchar(',');
            putchar(' ');
        }
    }
    
	return (0);
}
