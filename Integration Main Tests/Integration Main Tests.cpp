#include "pch.h"
#include "CppUnitTest.h"
extern "C" {
	#include "character.h"
	#include"IO.h"
	#include "object.h"
	#include "Player.h"
	#include"Typing.h"
}
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace IntegrationMainTests
{
	TEST_CLASS(IntegrationMainTests)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ptrPlayer p = createPlayer("Butthead", 100, 69, 69);

		}
		/*
		Typing Module
		
		
		
		
		
		*/
		/*
		Object
		
		
		
		
		*/
		/*
		Character
		
		
		
		
		*/
		/*
		Player
		
		
		
		
		*/

	};
}
