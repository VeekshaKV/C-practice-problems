//even or odd
#include<stdio.h>
#include<assert.h>
//function to check if the given number is even or odd
int even(int num){
	return num %2 ==0;
}

//function to run test cases
void run_tests(){
	assert(even(2) == 1); //even
	assert(even(7) == 0); //odd
	assert(even(19) == 0); //odd
	assert(even(-4) == 1); //even
	assert(even(-10) == 1); //even
}
//main function
int main(){
	int num;
//run test cases
	run_tests();

	// Ask user to enter a number
	printf("Enter an integer:");
	scanf("%d", &num);
//check and display the result
	if(even(num)){
		printf("%d is even.\n",num);
	} else{
		printf("%d is odd.\n",num);
	}
	return 0;
}
