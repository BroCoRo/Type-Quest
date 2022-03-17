// CSCN71030 - Team Based Project Development 
// Group Project Group 16 - Section 3
// Raghu, Tyler, Owen, Brodin
// March 3rd, 2022
// character module: Tyler Scheifley
// character.c
// Revision History 
// 1.0       March 3rd      2022 
#define _CRT_SECURE_NO_WARNINGS
#define MAX_SIZE 250
#define MAX_NAME_SIZE 40
#define MAX_ID_SIZE 10
#include "character.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void displayMonsterHealth(struct character* monster) 
{
	printf("%d", monster->health);
}

char* getSentence(struct character* monster)
{
	FILE* fp;
	char* sentence = (char*)malloc(MAX_SIZE * sizeof(char));
	if (!sentence)
	{
		sentence = "Monster has nothing to say.";
		return sentence;
	}

	char* temp;
	temp = (char*)malloc(MAX_SIZE * sizeof(char));
	if (!temp)
	{
		sentence = "Monster has nothing to say.";
		return sentence;
	}

	char IDNumber[2];
	sprintf(IDNumber, "%d", monster->ID);
	int length = 4 + strlen(IDNumber);
	int messageLength = 0;


	if ((fp = fopen("data.txt", "r")) == NULL)
	{
		sentence = "Monster has nothing to say.";
		return sentence;
	}
	else
	{
		while (fgets(temp, MAX_SIZE, fp) != NULL) {
			if ((strstr(temp, IDNumber)) != NULL) {

				messageLength = strlen(temp);
				memcpy(sentence, temp + length, messageLength);

				char* copy = _strdup(sentence);
				fclose(fp);
				free(sentence);
				free(temp);

				return copy;
			}
		}
	}

}
