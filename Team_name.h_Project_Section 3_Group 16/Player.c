// CSCN71030 - Player.c
// Group Project Group 16 - Section 3
// Owen
// March 14th, 2022
// 
// Revision History 
// 1.0       March 14th      2022
#define _CRT_SECURE_NO_WARNINGS
#include "Player.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

ptrPlayer createPlayer(char name[MAXNAME], int Health, int Damage, int Defence) {
	ptrPlayer newPlayer = (ptrPlayer)malloc(sizeof(PLAYER));

	if (!newPlayer) {
		printf("Error Allocating Memory\n");
		free(newPlayer);
		exit(1);
		
	}
	strcpy(newPlayer->name, name);
	newPlayer->Health = Health;
	newPlayer->Damage = Damage;
	newPlayer->Defence = Defence;
	
	return newPlayer;
}
int getHealth(ptrPlayer p) {
	return p->Health;
}

void setHealth(ptrPlayer p, int health) {
	p->Health = health;
}

int getDamage(ptrPlayer p) {
	return p->Damage;
}

void setDamage(ptrPlayer p,  int damage) {
	p->Damage = damage;
}

int getDefence(ptrPlayer p) {
	return p->Defence;
}

void setDefence(ptrPlayer p, int defence) {
	p->Defence = defence;
}

bool checkHealth(ptrPlayer p) {
	if (p->Health <= 0) {
		return false;
	}
	else {
		return true;
	}
}

void printPlayer(ptrPlayer p) {
	printf("Player Print:\n");
	printf("Name: %s\n", p->name);
	printf("Health: %d\n", p->Health);
	printf("Damage: %d\n", p->Damage);
	printf("Defence: %d\n", p->Defence);
}

int calculateDamage(ptrPlayer p, double score) {
	int outputDamage = p->Damage * score;

	if (score < 0.5) {
		//Monster's Turn to damage
		p->Health =- p->Damage * 0.5;
		
		return 0;
	}
	return outputDamage;
}
void DisposePlayer(ptrPlayer p) {
	free(p);
}