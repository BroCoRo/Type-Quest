// CSCN71030 - Team Based Project Development 
// Group Project Group 16 - Section 3
// Raghu, Tyler, Owen, Brodin
// March 3rd, 2022
// 
// Revision History 
// 1.0       March 3rd      2022

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#include "Player.h"
#include "object.h"
/*
	
*/

int main(void)
{
	ptrPlayer p = createPlayer("owen", 100, 50, 25);
	createItem("defence", "shield", 25, p);


	return(0);
}