//Program to calculate area of the circle
#include<stdio.h>

//function to calculate circle
float area(float radius){
	const float pi = 3.1415;
	return pi*radius*radius;
}
int main(){
	float r;
	printf("Enter radius of the circle:");
	scanf("%f", &r);

	printf("Area of the circle is: %.2f\n",area(r));
	return 0;
}
