#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "object.h"

//a function call by the story module that will determine whether or not to show an item and that has return type struct Item. 
//1 means item is shown and calls specificItem() and 0 for no item shown and returns to the story module
void createItem(char objectType[MAX_ITEM_NAME], char itemName[MAX_NAME_SIZE], int itemPoints, PLAYER* player)
{
	ITEM* item;
	item = (ITEM*)malloc(sizeof(struct item));

	if (item == NULL)
	{
		printf("memory not allocated\n");
		exit(0);
	}

	strcpy(item->itemType, objectType);
	strcpy(item->name, itemName);
	item->points = itemPoints;

	if (strcmp(item->itemType, "gFood") == 0)
	{
		increaseHealth(player, item->points);
	}
	else if (strcmp(item->itemType, "bFood") == 0)
	{
		decreaseHealth(player, item->points);
	}
	else if (strcmp(item->itemType, "attack") == 0)
	{
		increaseAttack(player, item->points);
	}
	else if (strcmp(item->itemType, "defence") == 0)
	{
		increaseDefense(player, item->points);
	}

	free(item);
}



//A function call by createItem() if the item is a "gFood" item
void increaseHealth(PLAYER* player, int points)
{
	player->Health = player->Health + points;

}


//A function call by createItem() if the item is a "bFood" item
void decreaseHealth(PLAYER* player, int points)
{
	player->Health = player->Health - points;

}

//A function call by createItem() if the item is a "attack" item
void increaseAttack(PLAYER* player, int points)
{
	player->Damage = player->Damage + points;

}

//A function call by createItem() if the item is a "defense" item
void increaseDefense(PLAYER* player, int points)
{
	player->Defence = player->Defence + points;

}