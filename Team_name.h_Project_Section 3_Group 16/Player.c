// CSCN71030 - Player.c
// Group Project Group 16 - Section 3
// Owen
// March 14th, 2022
// 
// Revision History 
// 1.0       March 14th      2022
#include "Player.h"
#include <stdio.h>
#include <stdbool.h>

int getHealth(ptrPLayer p) {
	return p->Health;
}

void setHealth(ptrPLayer p, int health) {
	p->Health = health;
}

int getDamage(ptrPLayer p) {
	return p->Damage;
}

void setDamage(ptrPLayer p,  int damage) {
	p->Damage = damage;
}

int getDefence(ptrPLayer p) {
	return p->Defence;
}

void setDefence(ptrPLayer p, int defence) {
	p->Defence = defence;
}

bool checkHealth(ptrPLayer p) {
	if (p->Health <= 0) {
		return false;
	}
	else {
		return true;
	}
}

void printPlayer(ptrPLayer p) {
	printf("Player Print:\n");
	printf("Name: %s\n", p->name);
	printf("Health: %d\n", p->Health);
	printf("Damage: %d\n", p->Damage);
	printf("Defence: %d\n", p->Defence);
}