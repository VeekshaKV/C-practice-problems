// program to check if the given input is character or integer
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<ctype.h>

//function to check input type
const char* input_type(char ch){
	if(isdigit(ch)){
		return "Integer";
	}else if (isalpha(ch)){
		return "Character";
	} else{
		return "Neither integer nor character";
	}
}

//function to test input identification
void test_input_type(){
	assert(strcmp(input_type('5'), "Integer") == 0);
	assert(strcmp(input_type('A'), "Character") == 0);
	assert(strcmp(input_type('$'), "Neither integer nor character") == 0);
	printf("Input type detection test passed.\n");
}

int main(){
	char input[100];

	test_input_type();

	printf("Enter a single character:");
	scanf("%s", input);

//check if user entered exactly 1 character
	if(strlen(input) != 1) {
		printf("Please enter single character only.\n");
		return 1;
		}

	char ch = input[0];
	printf("Input type : %s\n",input_type(ch)); //identify the type and print
	return 0;
}
