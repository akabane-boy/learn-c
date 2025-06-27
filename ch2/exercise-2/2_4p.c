/* 
 * A program that asks the user to enter a dollars-and-cents amount,
 * then displays the amount with 5% tax added.
 */
#include <stdio.h>

int main(void)
{
	float x;

	printf("Enter an amount: ");
	scanf("%f", &x);

	x = x * 1.05;
	
	printf("With tax added: $%.2f\n", x);

	return 0;
}
