// Program to reverse a number
#include<stdio.h>
#include<assert.h>

//function to reverse a digits of a number
int ReverseNumber(int num){
	int reversed = 0;
	while (num > 0){
		reversed = reversed *10 + (num % 10);
		num /= 10;
	}
	return reversed;
}

//test functions using assertions
void testReverseNumber(){
	assert(ReverseNumber(12345) == 54321);
	assert(ReverseNumber(10000) == 1);
	assert(ReverseNumber(11111) == 11111);
	assert(ReverseNumber(128600000) == 6821);
	assert(ReverseNumber(987654321) == 123456789);
}
int main(){
	
	testReverseNumber();
	int num;
	printf("Enter a number to reverse:");
	scanf("%d", &num);
	
	int reversed = ReverseNumber(num);
	printf("Reversed Number: %d\n", reversed);

	return 0;
}

