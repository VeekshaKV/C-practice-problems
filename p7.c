#include<stdio.h>
#include<assert.h>
// function to calculate 2^n using left shift 
int power_of_two(int n){
	return 1 << n; // shifted left by n bits is 2^n
}

//function to test power_of_two
void run_test(){
	assert(power_of_two(0)  == 1);
	assert(power_of_two(3)  == 8);
	assert(power_of_two(5)  == 32);
	assert(power_of_two(10)  == 1024);
	printf("2^n left shift passed.\n");
}
// main function
int main(){
	int n;
	//run assertions
	run_test();
	printf("Enter a non-negative integer N: ");
	scanf("%d",&n);
	if(n < 0){
		printf("Please enter a non-negative number:");
	} else{
		printf("2^%d = %d\n", n, power_of_two(n));
	}
	return 0;
}
