//program to find sum of random number
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<assert.h>

//function to generate a random number
int generate_random(int max){
	return rand() % max;
}

//function to compute sum of two integers
int compute_sum(int a, int b){
	return a + b;
}

//function to test compute sum function
void test_sum(){
	assert(compute_sum(2, 3) == 5);
	assert(compute_sum(3, 8) == 11);
	assert(compute_sum(-1, 1) == 0);
	printf("Sum computation test passed.\n");
}

int main(){
	int num1, num2, sum;

	// seed the random number generator usingcurrent time
	srand(time(0));
	
	//run test
	test_sum();

//generate two random numbers
	num1 = generate_random(100);
	num2 = generate_random(100);
// calculate sum
	sum = compute_sum(num1, num2);
// display results

	printf("Random number 1: %d\n", num1);
	printf("Random number 2: %d\n", num2);
	printf("Sum: %d\n", sum);
	return 0;
}
