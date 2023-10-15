#include <stdio.h>

int main()
{
    // Declare variables
    int principal, n_years;
    float rate;
  
    // Get data from user's inputs
    printf("Enter principal value: ");
    scanf("%d", &principal);
 
    printf("Number of year(s): ");
    scanf("%d", &n_years);
 
    printf("At what rate?: ");
    scanf("%f", &rate);
 
    // Calculate Simple Interest (SI)
    float si;
    si = principal * n_years * rate / 100;
    
    // Print result of calculations
    printf("The simple interest is %f\n", si);
    
    return 0;
}
