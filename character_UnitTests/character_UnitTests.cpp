#include "pch.h"
#include "CppUnitTest.h"
#include <string.h>
#define MAX_SIZE 80
#define MAX_NAME_SIZE 40

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern "C" {
	//struct character* generateRandomMonster(void);
	void decreaseMonsterHealth(int damage, struct character* monster);
	char* getSentence(struct character* monster);
	void setMonsterHealth(int health, struct character* monster);

	typedef struct character {
		int health;
		int ID;
		char name[MAX_NAME_SIZE];
		char image[MAX_SIZE][MAX_SIZE];

	}CHARACTER;
}

namespace characterUnitTests
{
	TEST_CLASS(characterUnitTests)
	{
	public:
		
		TEST_METHOD(decreaseMonsterHealth_valid)
		{
			CHARACTER monster = { 300,1,"name" };
			CHARACTER* p = &monster;
			int expected = 200;
			int damage = 100;

			decreaseMonsterHealth(damage,p);

			Assert::AreEqual(expected, p->health);
		}
		
		TEST_METHOD(decreaseMonsterHealth_invalid)
		{
			CHARACTER monster = { 0,1,"name" };
			CHARACTER* p = &monster;
			int notExpected = -100;
			int damage = 100;

			decreaseMonsterHealth(damage, p);

			Assert::AreNotEqual(notExpected, p->health);
		}

		TEST_METHOD(setMonsterHealth_equal)
		{
			CHARACTER monster = { 0,1,"name" };
			CHARACTER* p = &monster;
			int newHealth = 25;

			setMonsterHealth(newHealth, p);
			
			Assert::AreEqual(newHealth, p->health);
		}

		TEST_METHOD(setMonsterHealth_Notequal)
		{
			CHARACTER monster = { 0,1,"name" };
			CHARACTER* p = &monster;
			int newHealth = -25;

			setMonsterHealth(newHealth, p);

			Assert::AreNotEqual(newHealth, p->health);
		}
		
		TEST_METHOD(getSentence_valid)
		{
			CHARACTER monster = { 0,1,"name" };
			CHARACTER* p = &monster;
			char* expected = "test sentence";
			char* actual = getSentence(p);
			
			Assert::IsTrue(strcmp(expected, actual) == 0);
		}

	};
}
