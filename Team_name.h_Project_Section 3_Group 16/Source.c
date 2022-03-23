// CSCN71030 - Team Based Project Development 
// Group Project Group 16 - Section 3
// Raghu, Tyler, Owen, Brodin
// March 3rd, 2022
// 
// Revision History 
// 1.0       March 3rd      2022

#include <stdio.h>
#include "character.h"
#include <string.h>

int main(void)
{
	printf("Hello world\n");
	CHARACTER monster = { 100,1,"name" };
	CHARACTER* p = &monster;
	char* expected = "test sentence testing 1 2 3.";
	char* actual = getSentence(p);
	int result = 1;
	if(result = strcmp(expected, actual)==0)
	{
		printf("\nequal\n");
		printf("%s", actual);
		printf("\n");
		printf("%s", expected);
	}
	
	return(0);
}