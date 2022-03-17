#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
	double CheckSentence(char*, char*, int);
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TypingModuleTests
{
	TEST_CLASS(TypingModuleTests)
	{
	public:

		//This test method will test if the calcultated damadge from typing funtion works properly 
		TEST_METHOD(TypingScoreCalculationFunctionality_INPUT_PerfectMatch_PerfectScoreOUTPUTTED)
		{
			double calculatedScore;
			double recordedSpeed = 1;
			//calculate the score with an non-impactful time and a perfectly matched sentence
			calculatedScore = CheckSentence("Test sentence","Test sentence", recordedSpeed);
			//check for perfect score
			Assert::AreEqual(1.0,calculatedScore);
		}
		//This test method will test if the calcultated damadge from typing funtion works properly 
		TEST_METHOD(TypingScoreCalculationFunctionality_INPUT_ModerateMatch_ModerateScoreOUTPUTTED)
		{
			double calculatedScore;
			double recordedSpeed = 1;
			//calculate the score with an non-impactful time and a perfectly matched sentence
			calculatedScore = CheckSentence("Test sentence", "TeBB sentBBBB", recordedSpeed);
			//check for perfect score
			Assert::AreEqual(0.5, calculatedScore);
		}
		//This test method will test if the calcultated damadge from typing funtion works properly 
		TEST_METHOD(TypingScoreCalculationFunctionality_INPUT_TerribleMatch_FailedScoreOUTPUTTED)
		{
			double calculatedScore;
			double recordedSpeed = 1;
			//calculate the score with an non-impactful time and a perfectly matched sentence
			calculatedScore = CheckSentence("Test sentence", "BBBBBBBBBBBBB", recordedSpeed);
			//check for perfect score
			Assert::AreEqual(0.0, calculatedScore);
		}
		//This test method will test if the calcultated damadge from typing funtion works properly 
		TEST_METHOD(TypingScoreCalculationFunctionality_INPUT_PerfectMatch_FastTime_PerfectScoreOUTPUTTED)
		{
		}
		//This test method will test if the calcultated damadge from typing funtion works properly 
		TEST_METHOD(TypingScoreCalculationFunctionality_INPUT_PerfectMatch_ModerateTime_ModerateScoreOUTPUTTED)
		{
		}
		//This test method will test if the calcultated damadge from typing funtion works properly 
		TEST_METHOD(TypingScoreCalculationFunctionality_INPUT_PerfectMatch_SlowTime_LowScoreOUTPUTTED)
		{
		}
	};
}
