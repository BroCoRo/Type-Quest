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
#define MAX_COLUM 100
#define MAX_ROW 30
#define MAX_ID 7


#include "character.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

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

// displayMonster() is no longer needed since image isnt saved to struct

//void displayMonster(struct character* monster) 
//{
//	for (int i = 0; i < MAX_ROW; i++)
//	{
//		for (int j = 0; j < MAX_COLUM; j++)
//		{
//			if (j == 0 && i == 0)
//			{
//				printf("    ");
//			}
//
//			printf("%c", monster->image[i][j]);
//		}
//	}
//
//	printf("\n");
//}

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


	if ((fp = fopen("C:\\Users\\tyler\\source\\repos\\Team_name.h\\Team_name.h_Project_Section 3_Group 16\\monstersentences.txt", "r")) == NULL)
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
	bool fileError = false;
	char holder = ' ';

	char IDNumber[3];
	sprintf(IDNumber, "%d", monster->ID);
	int length = 4 + strlen(IDNumber);

	if ((fp = fopen("ASCIImonsters.txt", "r")) == NULL)
	{
		fprintf(stderr, "Monster couldn't be displayed!");
		fileError = true;
		return fileError;
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
					return;
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