// CSCN71030 - Team Based Project Development 
// Group Project Group 16 - Section 3
// Raghu, Tyler, Owen, Brodin
// March 3rd, 2022
// 
// Revision History 
// 1.0       March 3rd      2022

#include "Typing.h"
#include "IO.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define FIRST_ARGUMENT 1
#define LEVEL_ONE      1
#define LEVEL_TWO      2
#define LEVEL_THREE    3
#define LEVEL_FOUR     4


int main(int argc, char* argv[])
{
	//collect which level of the story to play
	int storyLevelToPlay = 0;
	sscanf_s(argv[FIRST_ARGUMENT], "%d", &storyLevelToPlay);
	bool canContinue = true;

	//Play level 1---------------------------------------------------------------------------------------------------------------------------------------------------------------------
	if (storyLevelToPlay == LEVEL_ONE)
	{
		//Determine the next steps for the game!
		while (canContinue == true)
		{
			printf("Would you like to save and exit or continue on to level 2?\n");
			printf("1. Save and exit\n");
			printf("2. Continue to level 2\n");
			int userInput = CollectNumericSelection();
			switch (userInput)
			{
			//Save an exit
			case 1:
				printf("Saving game...\n");
				canContinue = false;
				//CALL SAVE FUNCTION HERE
				break;
			//Continue to next level
  			case 2:
				printf("Loading level 2...\n");
				canContinue = false;
				storyLevelToPlay = LEVEL_TWO;
				break;
				//None of the menu options were selected
			default:
				printf("Invalid selction entered, please enter a number listen in the menu\n");
				break;
			}
		}
	}
	//Play level 1---------------------------------------------------------------------------------------------------------------------------------------------------------------------
	else if (storyLevelToPlay == LEVEL_TWO)
	{
		//Determine the next steps for the game!
		canContinue = true;
		while (canContinue == true)
		{
			printf("Would you like to save and exit or continue on to level 2?\n");
			printf("1. Save and exit\n");
			printf("2. Continue to level 3\n");
			int userInput = CollectNumericSelection();
			switch (userInput)
			{
				//Save an exit
			case 1:
				printf("Saving game...\n");
				canContinue = false;
				//CALL SAVE FUNCTION HERE
				break;
				//Continue to next level
			case 2:
				printf("Loading level 3...\n");
				canContinue = false;
				storyLevelToPlay = LEVEL_THREE;
				break;
				//None of the menu options were selected
			default:
				printf("Invalid selction entered, please enter a number listen in the menu\n");
				break;
			}
		}
	}
	//Play level 2---------------------------------------------------------------------------------------------------------------------------------------------------------------------
	else if (storyLevelToPlay == LEVEL_THREE)
	{
		//Determine the next steps for the game!
		canContinue = true;
		while (canContinue == true)
		{
			printf("Would you like to save and exit or continue on to level 2?\n");
			printf("1. Save and exit\n");
			printf("2. Continue to level 4\n");
			int userInput = CollectNumericSelection();
			switch (userInput)
			{
				//Save an exit
			case 1:
				printf("Saving game...\n");
				canContinue = false;
				//CALL SAVE FUNCTION HERE
				break;
				//Continue to next level
			case 2:
				printf("Loading level 4...\n");
				canContinue = false;
				storyLevelToPlay = LEVEL_FOUR;
				break;
				//None of the menu options were selected
			default:
				printf("Invalid selction entered, please enter a number listen in the menu\n");
				break;
			}
		}
	}
	//Play level 3---------------------------------------------------------------------------------------------------------------------------------------------------------------------
	else if (storyLevelToPlay == LEVEL_FOUR)
	{

	}
	//Play level 4---------------------------------------------------------------------------------------------------------------------------------------------------------------------
	else
	{
		fprintf(stderr, "An error occured when attempted to load a story. Ensure that a valid story number is entered (1-4)\n");
	}

	return(0);
}