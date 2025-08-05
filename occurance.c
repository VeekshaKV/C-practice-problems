//program to count occurrences of a digit in a number
#include<stdio.h>
#include<assert.h>
// function to count occurrences of a digit in a number
int DigitOccurance(int num, int digit){
	int count = 0;
	
	while (num > 0) {
		if(num %10 == digit){
			count++;
		}
		num /= 10;
	}
	return count;
}

//test function using assertions
void testDigitOccurance(){
	assert(DigitOccurance(123456711, 1) == 3);
	assert(DigitOccurance(2579553, 2) == 1);
	assert(DigitOccurance(88888, 8) == 5);
	assert(DigitOccurance(2579553, 6) == 0);
}

int main(){
	testDigitOccurance();

	int num, digit;
	printf("Enter the number:");
	scanf("%d", &num);
	printf("Enter the digit to count:");
	scanf("%d", &digit);

	if (digit < 0 || digit > 9){
		printf("INvalid digit. Enter a number between o to 9\n");
		return 1;
	}
	
	int count = DigitOccurance(num, digit);
	printf("Digit %d occurs %d times in %d.\n", digit, count, num);
	return 0;
}






























