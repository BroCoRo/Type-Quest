#pragma once
#define MAX_NAME_SIZE 20
#define MAX_ITEM_NAME 7

typedef struct item
{
	char itemType[MAX_ITEM_NAME];
	char name[MAX_NAME_SIZE];
	int points;

} ITEM;

void createItem(char objectType[MAX_ITEM_NAME], char itemName[MAX_NAME_SIZE], int itemPoints, PLAYER*);
void increaseHealth(PLAYER*, int points);
void decreaseHealth(PLAYER*, int points);
void increaseAttack(PLAYER*, int points);
void increaseDefense(PLAYER*, int points);