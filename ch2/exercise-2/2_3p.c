#include <stdio.h>

#define COEFFICIENT ((4.0f / 3.0f) * 3.14f)

int main(void)
{
	float r;

	printf("Enter a radius: ");
	scanf("%f", &r);

	printf("Volume of the sphere with radius 10m: %.3fm^3\n", r*r*r * COEFFICIENT);

	return 0;
}

