// CSCN71030 - Team Based Project Development 
// Group Project Group 16 - Section 3
// Raghu, Tyler, Owen, Brodin
// March 3rd, 2022
// character module: Tyler Scheifley
// character.c
// Revision History 
// 1.0       March 3rd      2022 
#define _CRT_SECURE_NO_WARNINGS
#include "character.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



CHARACTER* CreateCharacter(int health , int ID, char name[MAX_NAME_SIZE]) {
	CHARACTER* newCharacter = (CHARACTER*)malloc(sizeof(CHARACTER));
	if (!newCharacter) {
		printf("Error Allocating Memory\n");
		free(newCharacter);
		exit(1);
	}
	newCharacter->health = health;
	newCharacter->ID = ID;
	strcpy(newCharacter->name, name);

	return newCharacter;
	
}
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
		{/// fixed that for tyler
			printf("%c", monster->image[i][j]);
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
void disposeCharacter(CHARACTER* c) {
	free(c);
}