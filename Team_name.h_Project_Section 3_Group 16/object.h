#pragma once
#define MAX_NAME_SIZE 20
#define MAX_ITEM_NAME 8
#include "Player.h"
typedef struct item
{
	char itemType[MAX_ITEM_NAME];
	char name[MAX_NAME_SIZE];
	int points;

} ITEM;

ITEM* createItem(char objectType[MAX_ITEM_NAME], char itemName[MAX_NAME_SIZE], int itemPoints, ptrPlayer);
void increaseHealth(ptrPlayer, int points);
void decreaseHealth(ptrPlayer, int points);
void increaseAttack(ptrPlayer, int points);
void increaseDefence(ptrPlayer, int points);