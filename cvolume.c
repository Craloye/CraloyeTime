#include <stdio.h>
int main(void)
{
	float pi = 3.14;
	float radius =  0;
	printf("Enter the radius\n");
	scanf ("%f",&radius);
	float volume = 4.0f/3.0f*pi*radius*radius*radius;
	printf("The volume of the sphere is %f",volume);
	return 0;
}
