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


	/*if (item == NULL)
	{
		printf("memory not allocated\n");
		exit(0);
	}*/

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



//A function call by pickItem() when a player chooses to use an item. It has the struct player pointer 
//and the food item's integer value as parameters and has the player pointer as the return type. 
//The function will increase the player's health and return back to the player module
void increaseHealth(PLAYER* player, int points)
{
	player->Health = player->Health + points;

}


////A function call by pickItem() when a player chooses to use an item. 
////It has the struct player pointer and the food item's integer value as parameters and has the player pointer as the return type. 
////The function will decrease the player's health and return back to the player module
void decreaseHealth(PLAYER* player, int points)
{
	player->Health = player->Health - points;

}

////A function call by pickItem() when a player chooses to use an item. 
////It has the struct player pointer and the attack item's integer value as parameters and has the player pointer as the return type. 
////The function will increase the player's attack and return back to the player module
void increaseAttack(PLAYER* player, int points)
{
	player->Damage = player->Damage + points;

}

////A function call by pickItem() when a player chooses to use an item. 
////It has the struct player pointer and the defense item's integer value as parameters and has the player pointer as the return type. 
////The function will increase the player's defense and return back to the player module
void increaseDefense(PLAYER* player, int points)
{
	player->Defence = player->Defence + points;

}