#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always success (0)
 */

int main(void)
{
	/* Declare the variables */
	float distance, in_meters, in_centimeters, in_feet, in_inches;
    
	/* Get and store distance value in km */
	printf("What is the distance between the two cities you visited?\nAns (in km): ");
	scanf("%f", &distance);
    
	/*Convertions of input from km to various units*/
	in_meters = distance * 1000;
	in_centimeters = distance * 100000;
	in_feet = 3280.84;
	in_inches = 39370.1;
    
	/*printing values*/
	printf("The total distance in km is %.2f\n", distance);
	printf("The total distance in m is %.2f\n", in_meters);
	printf("The total distance in cm is %.2f\n", in_centimeters);
	printf("The total distance in feet is %.2f\n", in_feet);
	printf("The total distance in inches is %.2f\n", in_inches);
    
	return (0);
}
