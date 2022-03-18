// CSCN71030 - Team Based Project Development 
// Group Project Group 16 - Section 3
// Brodin
// March 17th, 2022
// 
// This is the IO file that holds all of the functions relating to the IO
// 
// Revision History 
// 1.0       March 17th      2022

#include "IO.h"

//This function will collect and return a valid numeric selection from the user
int CollectNumericSelection()
{
	bool isValidInput = false;
	int selection;
	//continually collect input until a valid input is received
	do
	{
		printf("Please enter your selection here: ");

		//collect input from the user until valid input have been entered
		if(scanf_s("%d", &selection) != 1 || selection != 1 && selection != 2)
		{
			printf("**Invalid input**\n");
			//dont consider \n a selection
			while (getchar() != '\n');
		}
		else
		{
			isValidInput = true;
		}
	} while (isValidInput == false);

	//return the valid input
	return selection;
}