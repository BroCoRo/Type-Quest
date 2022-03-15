#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern "C" {
	struct character* generateRandomMonster(void);
	void decreaseMonsterHealth(int damage, struct character* monster);
	char* getSentence(struct character* monster);
}

namespace characterUnitTests
{
	TEST_CLASS(characterUnitTests)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
		}
	};
}
