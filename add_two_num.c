#include <stdio.h>

int main(void)
{
   int num1, num2, sum;
   printf("Add two numbers to get sum\n");
   
   printf("Add: ");
   scanf("%d", &num1);
   
   printf("With: ");
   scanf("%d", &num2);
   
   sum = num1 + num2;
   
   printf("The sum of %d and %d is %d\n", num1, num2, sum);
   
   return (0);
}
