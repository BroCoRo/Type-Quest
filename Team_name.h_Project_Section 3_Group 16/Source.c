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
#include <string.h>
#include "object.h"

int main(void)
{
	PLAYER* player1;
	player1 = (PLAYER*)malloc(sizeof(struct player));
	
	strcpy(player1->name2, "Raghu");
	player1->Health = 100;
	player1->Damage = 30;
	player1->Defence = 50;

	printf("health: %d\n", player1->Health);

	createItem("gFood", "apple", 20, player1);

	printf("health: %d\n", player1->Health);

	printf("damage: %d\n", player1->Damage);

	createItem("attack", "board", 25, player1);

	printf("damage: %d\n", player1->Damage);

	printf("health: %d\n", player1->Health);

	createItem("bFood", "potato", 63, player1);
	printf("health: %d\n", player1->Health);

	return(0);
}