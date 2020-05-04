#include <stdio.h>
#define PI 3.14159

int main () 
{
	float x;
	int y;
	
	x = PI;	

	printf("ingrese el valor de y: ");
	scanf("%i", &y);

	x = PI * y;

	printf("el resultado es: %f ", x );

	return 0;	

}
