#include "pch.h"
#include "CppUnitTest.h"
extern "C" {
#include "Player.h"
#include "object.h"
}
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PlayerUnitTests
{
	TEST_CLASS(PlayerUnitTests)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			/// <summary>
			/// That was a test test case, but this should be good to go to write the testss
			/// 
			/// </summary>
			ptrPlayer player = createPlayer("Owen", 100, 50, 25);
			Assert::AreEqual(player, player);
		}
	};
}
