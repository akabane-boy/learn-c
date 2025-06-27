#include <stdio.h>

#define COEFFICIENT ((4.0f / 3.0f) * 3.14f)

int main(void)
{
	int r = 10;

	printf("Volume of the sphere with radius 10m: %fm^3\n", r*r*r * COEFFICIENT);

	return 0;
}

