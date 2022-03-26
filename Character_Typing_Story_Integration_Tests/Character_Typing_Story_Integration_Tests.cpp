#include "pch.h"
#include "CppUnitTest.h"
#include <string.h>
#include <stdio.h>
#define MAX_IMAGE_SIZE 80
#define MAX_NAME_SIZE 40
#define MAX_SIZE 250

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
extern "C" {
	//struct character* generateRandomMonster(void);
	void decreaseMonsterHealth(int damage, struct character* monster);
	char* getSentence(struct character* monster);
	void setMonsterHealth(int health, struct character* monster);
	double CheckSentence(char*, int, char*, double);
	
	typedef struct character {
		int health;
		int ID;
		char name[MAX_NAME_SIZE];
		char image[MAX_IMAGE_SIZE][MAX_IMAGE_SIZE];

	}CHARACTER;
	CHARACTER* CreateCharacter(int, int, char[MAX_NAME_SIZE]);
}
namespace CharacterTypingStoryIntegrationTests
{
	TEST_CLASS(CharacterTypingStoryIntegrationTests)
	{
	public:
		
		TEST_METHOD(TestMethod1INT_TEST_CREATE_MONSTER_FROM_STORY)
		{//Brodin

		}

		TEST_METHOD(INT_TEST_GETSENTENCE)
		{//Brodin
		}
		TEST_METHOD(INT_TEST_CREATEMONSTER1)
		{//Tyler
		}
		TEST_METHOD(NT_TEST_OPEN_SENTENCE_FILE)
		{//Tyler
		}
		TEST_METHOD(INT_TEST_OPEN_ASCIIART_FILE)
		{//Tyler
		}
	};
}
