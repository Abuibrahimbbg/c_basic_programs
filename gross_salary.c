#include <stdio.h>

int main(void)
{
	float salary, d_allowance, rent_allowance, gross_salary;
    
	printf("Enter Ramesh's basic salary: $");
	scanf("%f", &salary);
    
	d_allowance = salary * 0.4;
	rent_allowance = salary * 0.2;
    
	gross_salary = salary + d_allowance + rent_allowance;

	printf("Ramesh total gross salary is $%.2f\n", gross_salary);

	return (0);
}
