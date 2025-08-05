#include<stdio.h>
#include<assert.h>
//function to calculate sum of 5 digit number
int SumOfDigits(int num){
	int sum = 0;
	int temp = num;

	// extract each digit to add to sum
	while (temp > 0){
		sum += temp % 10; // get last digit
		temp /= 10; //remove last digit
	}
	return sum;
}
// function to check if a number has exactly 5 digits
	int FiveDigit(int num){
		int digitCount = 0;
		int temp = num;
		//count digits using loop
		for (; temp > 0; temp /= 10){
			digitCount++;
		}
		return (digitCount == 5);
	}

//test functions with assertions
void testSumOfDigits(){
	// test with 12345-> sum = 1+2+3+4+5 = 15
	assert(SumOfDigits(12345) == 15);
	assert(SumOfDigits(11111) == 5);
	assert(SumOfDigits(99999) == 45);
	assert(SumOfDigits(10000) == 1);
}
int main() {
	int num;
	//run tests
	testSumOfDigits();
	
	printf("Enter a 5-digit number:");
	scanf("%d", &num);

	//Validate input is exactly 5-digit using digit count function
	if(!FiveDigit(num)){
		printf("Please enter 5-digit number");
		return 1;
	}
	//calculate sum of digits
	int sum = SumOfDigits(num);
	// output results
	printf("Sum of the %d is %d.\n",num, sum);
	return 0;
}





















