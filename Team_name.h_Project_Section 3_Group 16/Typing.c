// CSCN71030 - Team Based Project Development 
// Group Project Group 16 - Section 3
// Typing Module: Brodin Collins-Robb
// March 17th, 2022
// 
// This is the typing module file that holds all of the functions relating to the typing module
// 
// Revision History 
// 1.0       March 17th      2022

#include "Typing.h"
#include <time.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

#define MAX_INPUT_BUFER      300
#define PERFECT_TYPING_SPEED 0.25
#define REDUCE_IMPACT        10
#define TWO_DECIMAL_PLACES   100.0
#define DECIMAL_FORMAT       100
#define MAX_LINE_LENGTH      35

//This function will get the input from the user (this input should match the sentence from the disaply sentence function 
char* GetInput(double *storeSpeed)
{
	char enteredSentence[MAX_INPUT_BUFER];
	double tempStoreSpeed;
	double startTime;
	double endTime;
	printf("----------------------------------------------\n");
	printf("|    > Copy the above sentence here!         |\n");
	printf("|    > Remember type fast and accurately!    |\n");
	printf("|    > ");
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
	tempStoreSpeed = (((endTime - startTime) / CLOCKS_PER_SEC) - 2); //subtract 2 so its easier 
	printf("----------------------------------------------\n");
	//send back the recorded speed
	*storeSpeed = tempStoreSpeed;
	//send back the sentence that the user entered
	return enteredSentence;
}

//This function takes in the sentence that the user had to type, and it takes in the sentence that the user did type,
//and it takes in the speed in which the user typed the sentence to find generated damage amount.
double CheckSentence(char* sentenceToType, int sentenceLength, char* sentenceTyped, double typingSpeed)
{
	double tempStoreNumCorrectChars = 0.0;
	//store the setenceLength as a double for the most accurate calculation
	double sentenceLen = (double)sentenceLength;
	//loop through every char of the expected sentence and compare it with the entered sentence
	for (int count = 0; count < sentenceLength; count++)
	{
		//compare characters betweeen the two sentences 
		if ((sentenceToType[count] ^ sentenceTyped[count]) == 0) //we can XOR (with the ^) the two sets of bits for each character to determine if they are the same (0)
		{
			//the chars match so increase the num of correct chars 
			tempStoreNumCorrectChars++;
		}
	}
	double accuracyScore = tempStoreNumCorrectChars / sentenceLen; // Calculate the accuracy of the entry based on the num of correct chars (from 0-100)

	//determine the influence that the entry time will have on the score (a longer setence will take a longer time to type
	double timeScore = typingSpeed / sentenceLength; //reduce the impact of the typing speed as typing speed isnt everything 

	//based on research the average person can type 200 character per minute so based on the above calculate any score below 0.25 is a great speed
	//So if the speed is below the great speed of 0.25 then dont reduce score at all
	if (timeScore <= PERFECT_TYPING_SPEED)
	{
		//send back the calculated score as a double of 2 decimal places 
		accuracyScore = round(accuracyScore * TWO_DECIMAL_PLACES); //round to 2 decimal places 
		accuracyScore = accuracyScore / DECIMAL_FORMAT; //show result as decimal
		return accuracyScore;
	}
	else
	{
		//the users typing speed was not considered perfect so reduce the accuracyScore by the time taken
		accuracyScore = (accuracyScore - timeScore); 
		//the user cannot receive a negative score so if the score is negative is will be considered a 0
		if (accuracyScore < 0)
		{
			accuracyScore = 0.0;
		}
		//send back the calculated score as a double of 2 decimal places 
		accuracyScore = round(accuracyScore * TWO_DECIMAL_PLACES); //round to 2 decimal places 
		accuracyScore = accuracyScore / DECIMAL_FORMAT; //show result as decimal
		//send back the calculated score as a double 
		return accuracyScore;
	}
}