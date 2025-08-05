#include<stdio.h>

//function to convert celsius to farenheit
float convert_to_farenheit(float celsius){
	return ((celsius *9.0 /5.0)+32);
}
//main function
int main(){
	float celsius, farenheit;
//ask user to input temperature in celsius
	printf("Enter the temperature in celsius:");
	scanf("%f", &celsius);
//convert to farenheit
	farenheit = convert_to_farenheit(celsius);
	printf("%.2f°C = %.2f°F\n", celsius, farenheit);
	return 0;
}
