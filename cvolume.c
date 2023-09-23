#include <stdio.h>
int main(void)
{
	float pi = 3.14;
	float radium =  0;
	printf("Enter the radium\n");
	scanf ("%f",&radium);
	float volume = 4.0f/3.0f*pi*radium*radium*radium;
	printf("The volume of the sphere is %f",volume);
	return 0;
}
