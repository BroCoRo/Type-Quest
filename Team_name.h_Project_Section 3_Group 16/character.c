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


void disposeCharacter(CHARACTER* c) {
	free(c);
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

	char IDNumber[14];
	sprintf(IDNumber, "%d", monster->ID);
	int length = 4 + strlen(IDNumber);
	int messageLength = 0;

	//Team_name.h_Project_Section 3_Group 16
	if ((fp = fopen("../Team_name.h_Project_Section 3_Group 16/monstersentences.txt", "r")) == NULL)
	{
		sentence = "Monster file couldn't be opened.";
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
bool getImage(struct character* monster)
{
	FILE* fp;
	char temp[MAX_ID];
	bool running = true;
	bool fileOpen = true;
	char holder = ' ';

	char IDNumber[MAX_ID];
	sprintf(IDNumber, "%d", monster->ID);
	int length = 4 + strlen(IDNumber);

	if ((fp = fopen("../Team_name.h_Project_Section 3_Group 16/ASCIImonsters.txt", "r")) == NULL)
	{
		fprintf(stderr, "Monster couldn't be displayed!");
		fileOpen = false;
		return fileOpen;
	}

	while (fgets(temp, length, fp) != NULL) {
		if ((strstr(temp, IDNumber)) != NULL) {
			running = false;
			break;
		}
		memset(temp, 0, sizeof(temp));
	}

	if (!running)
	{
		for (int indexi = 0; indexi < MAX_ROW; indexi++)
		{
			for (int indexj = 0; indexj < MAX_COLUM; indexj++)
			{
				if (holder == '\n')
				{
					indexi++;
				}

				if ((holder = getc(fp)) == ';')
				{
					fclose(fp);
					return fileOpen;
				}

				if (indexi == 0 && indexj == 0)
				{
					if (strlen(IDNumber) == 1)
					{
						printf("    ");
					}
					else if (strlen(IDNumber) == 2)
					{
						printf("     ");
					}
				}
				if (holder != ';')
				{
					printf("%c", holder);
				}

			}
		}
	}
	
}

int getMonsterHealth(struct character* monster)
{
	return monster->health;
}

