//Program to calculate how many characters between given two characters
#include<stdio.h>
#include<assert.h>

//Function to calculate how many characters between given two characters
int count_charac(char ch1, char ch2) {
	int diff = ch1 - ch2;

	//to calculate absolute diff
	if (diff < 0) {
		diff = -diff;
	}
	//if diff is 0 or 1, there is no character in between
	if (diff == 1 || diff ==0){
		return 0;
	}
	return diff - 1;
}

//Function to test logic 
void test_charac(){
	assert(count_charac('A','E') == 3);
	assert(count_charac('E', 'A') == 3);
	assert(count_charac('a', 'd') == 2);
	assert(count_charac('x', 'x') == 0);
	assert(count_charac('M', 'N') == 0);
	printf("All tests passed.\n");
}
int main(){
	char ch1, ch2;

//run some test before asking user
	test_charac();
//ask user input
	printf("Enter the first character:");
	scanf(" %c", &ch1);

	printf("Enter the second character:");
	scanf(" %c", &ch2);

//count how many character between given
	int betweencount = count_charac(ch1, ch2);
	//display result
	printf("There are %d character(s) between '%c' and '%c'.\n", betweencount, ch1, ch2);
	return 0;
}
