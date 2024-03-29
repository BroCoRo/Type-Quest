#pragma once
// CSCN71030 - Player.h
// Group Project Group 16 - Section 3
// Owen
// March 14th, 2022
// 
// Revision History 
// 1.0       March 14th      2022
#define MAXNAME 25
#define IMAGESIZEH 29
#define IMAGESIZEW 27
#include <stdio.h>
#include <stdlib.h>
#include "Colours.h"
#include <string.h>
#include <stdbool.h>
typedef struct player {
	char name[MAXNAME];
	int Health;
	int Damage;
	int Defence;

}PLAYER, * ptrPlayer;
bool savePlayer(ptrPlayer, FILE*);
ptrPlayer loadPlayer(FILE*);
ptrPlayer createPlayer(char[MAXNAME], int, int, int);
void DisposePlayer(ptrPlayer);
int getHealth(ptrPlayer);
void setHealth(ptrPlayer, int);
int getDamage(ptrPlayer);
void setDamage(ptrPlayer, int);
int getDefence(ptrPlayer);
void setDefence(ptrPlayer, int);
void printPlayer(ptrPlayer);
void printAffects(ptrPlayer p, char type[MAXNAME], int pts);
int calculateDamage(ptrPlayer, double);
