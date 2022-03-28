
#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "Player.h"
#include "object.h"
}
#define _CRT_SECURE_NO_WARNINGS
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PlayerUnitTests
{
	TEST_CLASS(PlayerUnitTests)
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
