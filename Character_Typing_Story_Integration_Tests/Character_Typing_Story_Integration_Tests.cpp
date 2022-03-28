#include "pch.h"
#include "CppUnitTest.h"
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
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
	bool getImage(struct character* monster);
	
	typedef struct character {
		int health;
		int ID;
		char name[MAX_NAME_SIZE];
		//char image[MAX_IMAGE_SIZE][MAX_IMAGE_SIZE];

	}CHARACTER;
	
	CHARACTER* CreateCharacter(int, int, char[MAX_NAME_SIZE]);
}
namespace CharacterTypingStoryIntegrationTests
{
	TEST_CLASS(CharacterTypingStoryIntegrationTests)
	{
	public:
		//this test method ensures that a character from the story can be successfully created 
		TEST_METHOD(INT_TEST_CREATE_MONSTER_FROM_STORY)
		{//Brodin
			//setup a sample story monster
			int GooeyGlobhealth = 100;
			int GooeyGlobID = 6;
			char GooeyGlobName[MAX_NAME_SIZE] = "Gooey Glob";
			//call create character function (as we would in the story module)
			CHARACTER* gooeyGlob = CreateCharacter(GooeyGlobhealth, GooeyGlobID, GooeyGlobName);
			//determine if the monster was setup correctly 
			int result = strcmp(GooeyGlobName, gooeyGlob->name);
			Assert::AreEqual(GooeyGlobhealth, gooeyGlob->health);
			Assert::AreEqual(GooeyGlobID, gooeyGlob->ID);
			Assert::AreEqual(result, 0);
		}
		//this test method ensure that the typing modules checkSentence function can use the getSentence function from the character module to know what sentence for the monster in the story to type 
		TEST_METHOD(INT_TEST_GETSENTENCE)
		{//Brodin
			//setup sample story monster
			int GooeyGlobhealth = 100;
			int GooeyGlobID = 6;
			char monsterName[MAX_NAME_SIZE] = "Gooey Glob";
			CHARACTER* gooeyGlob = CreateCharacter(GooeyGlobhealth, GooeyGlobID, monsterName);
			//setup sample typing scores
			double calculatedScore;
			double recordedSpeed = 1.0;
			//calculate the score with an non-impactful time and a perfectly matched sentence
			calculatedScore = CheckSentence(getSentence(gooeyGlob), 176, "Send your disgusting drowning goopy stink away! Swat the thick slime away to avoid potential suffocation! Push through the cloud, eyes burning, nose plugged, you can do this!\n", recordedSpeed);
			//check for perfect score
			Assert::AreEqual(1.0, calculatedScore);
		}
		TEST_METHOD(INT_TEST_CREATEMONSTER1)
		{//Tyler
			CHARACTER testMonster;
			CHARACTER* p = &testMonster;
			int monsterhealth = 100;
			int monsterID = 1;
			char monsterName[MAX_NAME_SIZE] = "Tester Monster";
			p = CreateCharacter(monsterhealth, monsterID, monsterName);
			int result = 1;
			result = strcmp(monsterName, p->name);
			Assert::AreEqual(monsterhealth, p->health);
			Assert::AreEqual(monsterID, p->ID);
			Assert::AreEqual(result, 0);
		}
		TEST_METHOD(INT_TEST_OPEN_SENTENCE_FILE)
		{//Tyler
			CHARACTER monster = { 100,7,"Slime" };
			CHARACTER* p = &monster;
			char* expected = "Slimes are made of Gooey goo, make sure not to let them touch your favourte shoe.\n";

			char* error = "Monster has nothing to say.\n";
			char* actual = getSentence(p);
			int resultOutput = 1;
			int notOpened = 1;
			resultOutput = strcmp(expected, actual);
			notOpened = strcmp(error, actual);
			Assert::AreEqual(resultOutput, 0);
			Assert::AreNotEqual(notOpened, 0);
		}
		TEST_METHOD(INT_TEST_OPEN_ASCIIART_FILE)
		{//Tyler
			CHARACTER monster = { 100,1,"Tester Monster" };
			CHARACTER* p = &monster;
			bool expected = true;
			bool actual = getImage(p);
			Assert::AreEqual(expected, actual);
		}
	};
}
