// Program to convert upper to lowercase
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<ctype.h> // for upper and lowercase

//function to check if a character is upper or lowercase
int is_upper(char ch){
	return (ch>= 'A' && ch <= 'Z');
}
char convert_to_lowercase(char ch){
		if(is_upper(ch)){
			return ch + ('a' -'A');
		}
		return ch;
}
//Function to convert a full string to lowercase
void convert_string_to_lowercase(char* input, char* output){
	int i=0;
	while (input[i] != '\0'){
		output[i] = convert_to_lowercase(input[i]);
		i++;
	}
	output[i] = '\0';
}

//Function to test the conversion logic
void run_tests(){
	assert(convert_to_lowercase('A') == 'a');
	assert(convert_to_lowercase('Z') == 'z');
	assert(convert_to_lowercase('M') == 'm');
	assert(convert_to_lowercase('a') == 'a');
	assert(convert_to_lowercase('1') == '1');

	char  test_input1[] = "HeLLo";
	char expected1[] = "hello";
	char result1[100];
	convert_string_to_lowercase(test_input1, result1);
	assert(strcmp(result1, expected1) == 0);

	char test_input2[] = "123 ABC xyz!";
	char expected2[] = "123 abc xyz!";
	char result2[100];
	convert_string_to_lowercase(test_input2, result2);
	assert(strcmp(result2,expected2) == 0);

	printf("All tests passed successfully.\n");
}
//main function
int main(){
	char input[1000];
	char output[1000];

	run_tests(); //run internal tests

	printf("Enter a word or sentence:");
	fgets(input, sizeof(input), stdin);
	input[strcspn(input, "\n")] = '\0'; //remove newline

	convert_string_to_lowercase(input, output);
//display the result
	printf("Converted to lowercase: %s\n",output);
	return 0;
}	













