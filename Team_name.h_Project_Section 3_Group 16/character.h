#pragma once
// CSCN71030 - Team Based Project Development 
// Group Project Group 16 - Section 3
// Raghu, Tyler, Owen, Brodin
// March 3rd, 2022
// character module: Tyler Scheifley
// character.h
// Revision History 
// 1.0       March 3rd      2022
#define MAX_SIZE 80
#define MAX_NAME_SIZE 40

typedef struct character {
	int health;
	int ID;
	char name[MAX_NAME_SIZE];
	char image[MAX_SIZE][MAX_SIZE];

}CHARACTER;

CHARACTER* CreateCharacter(int, int, char[MAX_NAME_SIZE]);
void disposeCharacter(CHARACTER*);
struct character* generateRandomMonster(void);
void decreaseMonsterHealth(int damage, struct character* monster);
char* getSentence(struct character* monster);
void displayMonster(struct character* monster);
void displayMonsterHealth(struct character* monster);
void setMonsterHealth(int health, struct character* monster);