#include <stdio.h>

int main (void) {
	float radius;
	double area;
	system("clear");
	printf("\nEnter the radius of the circle: ");
	scanf("%f", &radius);
	area = 3.14159 * radius * radius;
	printf("\nArea = %.4f\n\n", area);

	return 0;
}
