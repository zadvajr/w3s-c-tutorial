#include <stdio.h>
/**
 * type_conversion - there are two types of conversion
 * implicit and explicit
 *
 */
int main(void)
{
	float num;
	float mynum;

	num = 9;

	printf("%f\n", num); /* This will print a float value of 9.000000*/

	/*explicit conversion done by the programmer*/

	mynum = (float) 5 / 2;

	printf("My Num is = %.2f\n", mynum);
	
	return (0);
}
