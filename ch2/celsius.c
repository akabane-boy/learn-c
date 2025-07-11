#include <stdio.h>

/* This #define ~ is called 'macros' */
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f) //must be float

int main(void)
{
	float fahrenheit, celsius;

	printf("Enter Fahrenheit temperature: ");
	scanf("%f", &fahrenheit);

	celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

	printf("Celsius equivalent: %.1f\n", celsius); // 1 digits after decimal point.

	return 0;
}
