#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern "C" {
	#include "character.h"
	#include "IO.h"
	#include "object.h"
	#include "Player.h"
	#include "Typing.h"
}

namespace IntegrationMainTests
{
	TEST_CLASS(IntegrationMainTests)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ptrPlayer p = createPlayer("Butthead", 100, 69, 69);

		}

		TEST_METHOD(INT_TEST_CREATE_OBJECT_FROM_STORY)
		{
			//setup a sample story object
			ptrPlayer newPlayer = createPlayer("John", 100, 100, 100);
			int itemPoints = 20;
			char ItemType[MAX_ITEM_NAME] = "damage";
			char ItemName[MAX_NAME_SIZE] = "Rock";
			//call create an object function (as we would in the story module)
			ITEM* rock = createItem(ItemType, ItemName, itemPoints, newPlayer);
			//determine if the object was setup correctly 
			int result = strcmp(ItemType, rock->itemType);
			int result1 = strcmp(ItemName, rock->name);
			Assert::AreEqual(itemPoints, rock->points);
			Assert::AreEqual(result, 0);
			Assert::AreEqual(result1, 0);
		}

		TEST_METHOD(INT_TEST_CAN_CONTINUE)
		{
			//setup a spot where the player takes damage as would happen in the story
			ptrPlayer newPlayer = createPlayer("John", 2, 10, 8);

			//sample terrible tpying score outputed to the stroy module
			double typingScore = 0.0;

			//send this to the player module 
			calculateDamage(newPlayer, typingScore);

			//player should be dead and "Gamer over should be printed to the terminal"
			Assert::AreEqual(0, newPlayer->Health);
		}
		/*
		Object
		
		
		
		
		*/
		
		//Character
		TEST_METHOD(INT_TEST_DAMAGECHARACTER)
		{
			CHARACTER* p = CreateCharacter(100,1,"wizard");
			ptrPlayer Player = createPlayer("Joe", 20, 50, 10);
			double perfectScore = 1.0;
			int expectedHealth = 50;
			decreaseMonsterHealth(calculateDamage(Player,perfectScore), p);
			Assert::AreEqual(expectedHealth, p->health);
		}
		
		
		
		
		/*
		Player
		
		
		
		
		*/

	};
}
