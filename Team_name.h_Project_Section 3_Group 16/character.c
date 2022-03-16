// CSCN71030 - Team Based Project Development 
// Group Project Group 16 - Section 3
// Raghu, Tyler, Owen, Brodin
// March 3rd, 2022
// character module: Tyler Scheifley
// character.c
// Revision History 
// 1.0       March 3rd      2022 
#include "character.h"
#include <stdio.h>
#include <stdlib.h>

void decreaseMonsterHealth(int damage, struct character* monster) 
{
	if (monster->health != 0)
	{
		monster->health -= damage;
	}
	else 
	{
		return 0;
	}
}

void displayMonster(struct character* monster) 
{

	for (int i = 0; i < MAX_SIZE; i++) 
	{
		for (int j = 0; j < MAX_SIZE; j++)
		{
			printf("%c", monster->image[MAX_SIZE][MAX_SIZE]);
		}

	}

	printf("\n");
}

void setMonsterHealth(int health, struct character* monster)
{
	if (health > 0)
	{
		monster->health = health;
	}
	else
	{
		return 0;
	}
	
}