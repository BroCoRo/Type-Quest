#pragma once

// CSCN71030 - Team Based Project Development 
// Group Project Group 16 - Section 3
// Raghu, Tyler, Owen, Brodin
// March 3rd, 2022
// character module: Tyler Scheifley
// character.h
// Revision History 
// 1.0       March 3rd      2022
#include <stdbool.h>
#define MAX_IMAGE_SIZE 80
#define MAX_NAME_SIZE 40

typedef struct character {
	int health;
	int ID;
	char name[MAX_NAME_SIZE];

}CHARACTER;

//struct character* generateRandomMonster(void);
void decreaseMonsterHealth(int damage, struct character* monster);
char* getSentence(struct character* monster);
//void displayMonster(struct character* monster);
bool getImage(struct character* monster);
void displayMonsterHealth(struct character* monster); 
void setMonsterHealth(int health, struct character* monster); 
CHARACTER* CreateCharacter(int, int, char[MAX_NAME_SIZE]);