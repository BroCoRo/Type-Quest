// CSCN71030 - Team Based Project Development 
// Group Project Group 16 - Section 3
// Brodin
// March 17th, 2022
// 
// This is the typing module file that holds all of the functions relating to the typing module
// 
// Revision History 
// 1.0       March 17th      2022

#include "Typing.h"
#include <time.h>

#define MAX_INPUT_BUFER 300

//This function will output the sentence that the user must type to the terminal.
char* DisplaySentence(char* monsterSentence)
{
	//print the sentence that the user is required to type to the screen
	printf("%s\n", monsterSentence);
	//return the sentence that the user must type
	return monsterSentence;
}

//This function will get the input from the user (this input should match the sentence from the disaply sentence function 
char* GetInput(int storeSpeed)
{
	char* enteredSentence;
	double tempStoreSpeed;
	double startTime;
	double endTime;
	//record the start time of when the user is ready to type
	startTime = clock();
	//allow the user to type (also have a max buf so the user cannot type forever)
	if (scanf_s("%[^\n]s", enteredSentence, MAX_INPUT_BUFER) != 1)
	{
		//do not consider the \n character a selection
		while (getchar() != '\n');
		tempStoreSpeed = MAX_INPUT_BUFER; //return an large time as the user typed far to much so this should be considered a failed entry
	}
	endTime = clock();
	//calculate the time take to enter the sentence by subtracting the end clock recording with the start clock recording divided by
	//the number of clock cycles per second (THIS WILL CALCULATE THE TIME TAKEN IN SECONDS)
	tempStoreSpeed = (endTime - startTime) / CLOCKS_PER_SEC; 
	//send back the sentence that the user entered
	return enteredSentence;
}

//This function takes in the sentence that the user had to type, and it takes in the sentence that the user did type,
//and it takes in the speed in which the user typed the sentence to find generated damage amount.
double CheckSentence(char* sentenceToType, char* sentenceTyped, double typingSpeed)
{

}