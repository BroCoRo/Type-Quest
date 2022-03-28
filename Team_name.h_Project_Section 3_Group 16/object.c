#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "object.h"

//a function called by the story module that creates an item and then calls other functions to increase the players stats
ITEM* createItem(char objectType[MAX_ITEM_NAME], char itemName[MAX_NAME_SIZE], int itemPoints, ptrPlayer player)
{
	ITEM* item;
	item = (ITEM*)malloc(sizeof(struct item)); //dynamically allocating memory for the item

	if (item == NULL)
	{
		printf("memory not allocated\n");
		exit(0);
	}

	//copying item information
	strcpy(item->itemType, objectType);
	strcpy(item->name, itemName);
	item->points = itemPoints;

	//calls one of the corresponding functions based on item type
	if (strcmp(item->itemType, "gFood") == 0)
	{
		increaseHealth(player, item->points);
	}
	else if (strcmp(item->itemType, "bFood") == 0)
	{
		decreaseHealth(player, item->points);
	}
	else if (strcmp(item->itemType, "damage") == 0)
	{
		increaseAttack(player, item->points);
	}
	else if (strcmp(item->itemType, "defence") == 0)
	{
		increaseDefence(player, item->points);
	}
	else
	{
		printf("Entered incorrect item type. Please correct and try again");
	}
	

	//free(item); //deleting the allocated memory after item use

	return item;
}



//A function call by createItem() if the item is a "gFood" item
void increaseHealth(ptrPlayer player, int points)
{
	player->Health = player->Health + points;

}


//A function call by createItem() if the item is a "bFood" item
void decreaseHealth(ptrPlayer player, int points)
{
	player->Health = player->Health - points;

}

//A function call by createItem() if the item is a "attack" item
void increaseAttack(ptrPlayer player, int points)
{
	player->Damage = player->Damage + points;

}

//A function call by createItem() if the item is a "defence" item
void increaseDefence(ptrPlayer player, int points)
{
	player->Defence = player->Defence + points;

}
