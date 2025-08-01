#include<stdio.h>
#include<assert.h>
//function to check if given year is leap year
int leap_year(int year){
	if(year % 4 ==0){
		if(year % 100 != 0 || year % 400 ==0){
			return 1; //leap year
			}
		}
	return 0;
}
//functions to run tests cases using assertions
void run_tests(){
	assert(leap_year(2000) == 1); //divisible by 400
	assert(leap_year(2020) == 1); //divisible by 4, not by 400
	assert(leap_year(1900) == 0); //not divisible by 4
	assert(leap_year(2023) == 0); // not divisible by 4
	assert(leap_year(2400) == 1); //future leap year

	printf("All test case passed.\n");
	}
//main function
int main(){
	int year;
	//run logic tests
	run_tests();
	//ask user to input a year
	printf("Enter a year:");
	scanf("%d", &year);
//check and print result
	if(leap_year(year)){
		printf("%d is a leap year.\n", year);
	} else{
		printf("%d is not a lear year.\n", year);
	}
	return 0;
}
