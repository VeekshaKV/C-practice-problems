//Program to check if a number is palindrome
#include<stdio.h>
#include<assert.h>

// Function to reverse a number 
int reverse(int num){
	int reversed = 0;
	while (num >0) {
		reversed = reversed * 10 +(num % 10);
		num /= 10;
	}
	return reversed;
}

//function to check if number is palindrome
int palindrome(int num){
	return (num == reverse(num));
}

//test function using assertions

void testPalindrome(){
	assert(palindrome(12321) == 1);
	assert(palindrome(1986) == 0);
	assert(palindrome(56788765) == 1);
	assert(palindrome(2) == 1);
}
int main(){
	testPalindrome();

	int num;
	printf("Enter the number to check palindrome:");
	scanf("%d", &num);

	    if (num < 0) {
        printf("Negative numbers are not considered palindromes.\n");
        return 1;
    }


	if(palindrome(num)){
		printf("%d is palindrome number.\n", num);
	} else {
		printf("%d is not palindrome number.\n", num);
	}
	return 0;
}















