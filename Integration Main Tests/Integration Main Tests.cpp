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
			Assert::AreEqual(0, 0);

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
		
		//Object
		TEST_METHOD(INT_TEST_OBJPLAYERBUFF1) {
			ptrPlayer player = createPlayer("Player", 100, 50, 25);
			createItem("gFood", "apple", 25, player);
			int result = strcmp(player->name, "Player");

			//checks to see if it increases player's health without changing anything else
			Assert::AreEqual(result, 0);
			Assert::AreEqual(125, player->Health);
			Assert::AreEqual(50, player->Damage);
			Assert::AreEqual(25, player->Defence);
		}
		TEST_METHOD(INT_TEST_OBJPLAYERDEBUFF1) {
			ptrPlayer player = createPlayer("Player", 100, 50, 25);
			createItem("bFood", "potato", 45, player);
			int result = strcmp(player->name, "Player");

			//checks to see if it decreases player's health without changing anything else
			Assert::AreEqual(result, 0);
			Assert::AreEqual(55, player->Health);
			Assert::AreEqual(50, player->Damage);
			Assert::AreEqual(25, player->Defence);
		}
		TEST_METHOD(INT_TEST_OBJPLAYERBUFF2) {
			ptrPlayer player = createPlayer("Player", 100, 50, 25);
			createItem("damage", "sword", 25, player);
			int result = strcmp(player->name, "Player");

			//checks to see if it increases player's damage without changing anything else
			Assert::AreEqual(result, 0);
			Assert::AreEqual(100, player->Health);
			Assert::AreEqual(75, player->Damage);
			Assert::AreEqual(25, player->Defence);
		}
		TEST_METHOD(INT_TEST_OBJPLAYERBUFF3) {
			ptrPlayer player = createPlayer("Player", 100, 50, 25);
			createItem("defence", "shield", 35, player);
			int result = strcmp(player->name, "Player");

			//checks to see if it increases player's defence without changing anything else
			Assert::AreEqual(result, 0);
			Assert::AreEqual(100, player->Health);
			Assert::AreEqual(50, player->Damage);
			Assert::AreEqual(60, player->Defence);
		}

	};
}
