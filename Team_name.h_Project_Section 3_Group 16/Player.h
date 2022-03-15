#pragma once
// CSCN71030 - Player.h
// Group Project Group 16 - Section 3
// Owen
// March 14th, 2022
// 
// Revision History 
// 1.0       March 14th      2022
#define MAXNAME 25

typedef struct player {
	char name[MAXNAME];
	int Health;
	int Damage;
	int Defence;

}PLAYER, *ptrPLayer;

int getHealth(ptrPLayer);
void setHealth(ptrPLayer, int);
int getDamage(ptrPLayer);
void setDamage(ptrPLayer, int);
int getDefence(ptrPLayer);
void setDefence(ptrPLayer, int);
bool checkHealth(ptrPLayer);
void printPlayer(ptrPLayer);