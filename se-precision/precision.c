#include <stdio.h>
/*
 * set-precision - this program rounds off
 * some floating point numbers to precisions
 *
 */
int main(void)
{
	float weight;

	weight = 69.50;

	printf("The weight before setting precision is = %f\n", weight);
	printf("The weight to 1 decimal point is = %.1f\n", weight);
	printf("The weight to 2 decimal point is = %.2f\n", weight);
	printf("The weight to 3 decimal point is = %.3f\n", weight);
	printf("The weight to 4 decimal point is = % .4f\n", weight);

	return (0);
}
