
#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "Player.h"
#include "object.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PlayerUnitTests
{
	TEST_CLASS(PlayerObjectUnitTests)
	{
	public:
		
		TEST_METHOD(INT_TEST_CREATEPLAYER1)
		{
		//This tests the create player function.
			ptrPlayer p = createPlayer("Player", 100, 50, 25);
			PLAYER player;
			strcpy_s(player.name, MAXNAME, "Player");
			player.Damage = 50;
			player.Health = 100;
			player.Defence = 25;

			Assert::AreEqual(p->name, player.name);
			Assert::AreEqual(p->Damage, player.Damage);
			Assert::AreEqual(p->Defence, player.Defence);
			Assert::AreEqual(p->Health, player.Health);
		}
		TEST_METHOD(INT_TEST_CREATEOBJ1)
		{
			//this tests the object modules ability to create an item
			ptrPlayer p = createPlayer("Player", 100, 50, 25);
			ITEM itemTest;
			//expected value
			strcpy_s(itemTest.itemType, MAX_ITEM_NAME, "gFood");
			strcpy_s(itemTest.name, MAX_NAME_SIZE, "apple");
			itemTest.points = 25;

			//actual value
			ITEM* item = createItem("gFood", "apple", 25, p);

			Assert::AreEqual(itemTest.itemType, item->itemType);
			Assert::AreEqual(itemTest.name, item->name);
			Assert::AreEqual(itemTest.points, item->points);

		}
		//the following test the object modules ability to increase/decrease specific player stats
		TEST_METHOD(INT_TEST_OBJPLAYERBUFF1) {
			ptrPlayer player = createPlayer("Player", 100, 50, 25);
			createItem("gFood", "apple", 25, player);
			Assert::AreEqual(125, player->Health);
		}
		TEST_METHOD(INT_TEST_OBJPLAYERDEBUFF1) {
			ptrPlayer player = createPlayer("Player", 100, 50, 25);
			createItem("bFood", "potato", 25, player);
			Assert::AreEqual(75, player->Health);
		}
		TEST_METHOD(INT_TEST_OBJPLAYERBUFF2) {
			ptrPlayer player = createPlayer("Player", 100, 50, 25);
			createItem("damage", "sword", 25, player);
			Assert::AreEqual(75, player->Damage);
		}
		TEST_METHOD(INT_TEST_OBJPLAYERBUFF3) {
			ptrPlayer player = createPlayer("Player", 100, 50, 25);
			createItem("defence", "shield", 25, player);
			Assert::AreEqual(50, player->Defence);
		}
	};
}
