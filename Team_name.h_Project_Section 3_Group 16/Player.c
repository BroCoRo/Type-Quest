// CSCN71030 - Player.c
// Group Project Group 16 - Section 3
// Owen
// March 14th, 2022
// 
// Revision History 
// 1.0       March 14th      2022
#define _CRT_SECURE_NO_WARNINGS
#include "Player.h"


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

void setDamage(ptrPlayer p, int damage) {
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
	int Pdefence, Pdamage;
	if (score < 0.5) {
		//Monster's Turn to damage

		Pdefence = p->Defence;
		Pdamage = p->Damage;
		if (Pdamage > Pdefence) {
			p->Health -= Pdamage - Pdefence;
		}
		if (p->Health <= 0) {
			return 0;
		}
		return 0;
	}
	return outputDamage;
}

void DisposePlayer(ptrPlayer p) {
	free(p);
}

void printAffects(ptrPlayer p, char type[MAXNAME] , int pts) {
	printPlayer(p);

	printf("|\n");
	printf("|\n");
	printf("|\n");
	printf("V\n");
	if (!strcmp(type, "gFood")) {
		printf("Name: %s\n", p->name);
		printf("Health: %d", p->Health);
		green();
		printf("+ %d\n", pts);
		reset();
		printf("Damage: %d\n", p->Damage);
		printf("Defence: %d\n", p->Defence);
	}else if (!strcmp(type,"bFood")) {
		printf("Name: %s\n", p->name);
		printf("Health: %d", p->Health);
		red();
		printf("- %d\n", pts);
		reset();
		printf("Damage: %d\n", p->Damage);
		printf("Defence: %d\n", p->Defence);
	}else if (!strcmp(type,"damage")) {
		printf("Name: %s\n", p->name);
		printf("Health: %d\n", p->Health);
		printf("Damage: %d", p->Damage);
		green();
		printf("+ %d\n", pts);
		reset();
		printf("Defence: %d\n", p->Defence);
	}else if (!strcmp(type, "defence")) {
		printf("Name: %s\n", p->name);
		printf("Health: %d\n", p->Health);
		printf("Damage: %d\n", p->Damage);
		printf("Defence: %d", p->Defence);
		green();
		printf("+ %d\n", pts);
		reset();
	}
}

bool savePlayer(ptrPlayer player, FILE* fp) {
	fprintf(fp, "%s", player->name);
	fprintf(fp, "%d", player->Health);
	fprintf(fp, "%d", player->Damage);
	fprintf(fp, "%d", player->Defence);
	if (fclose(fp)) {
		return true;
	}
	else {
		return false;
	}
}
ptrPlayer loadPlayer(FILE* fp) {
	char name[MAXNAME];
	int health = 0;
	int damage = 0;
	int defence = 0;
	fscanf(fp, "%s", name);
	fscanf(fp, "%d", health);
	fscanf(fp, "%d", damage);
	fscanf(fp, "%d", defence);
	ptrPlayer newPlayer = createPlayer(name, health, damage, defence);
	return newPlayer;

}