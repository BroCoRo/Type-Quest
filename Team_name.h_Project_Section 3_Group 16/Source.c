// CSCN71030 - Team Based Project Development 
// Group Project Group 16 - Section 3
// Raghu, Tyler, Owen, Brodin
// March 3rd, 2022
// 
// Revision History 
// 1.0       March 3rd      2022

#include <stdio.h>
#include <stdlib.h>
#include "Player.h"
/*
	
*/

int main(void)
{
	ptrPlayer Player = createPlayer("Owen", 25, 50, 30);
	printPlayer(Player);

	DisposePlayer(Player);

	return(0);
}