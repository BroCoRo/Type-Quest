#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
	double CheckSentence(char*, int, char*, double);
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TypingModuleTests
{
	TEST_CLASS(TypingModuleTests)
	{
	public:

		//This test method will test if the calculated score from typing function works properly 
		TEST_METHOD(TypingScoreCalculationFunctionality_INPUT_PerfectMatch_FastTime_PerfectScoreOUTPUTTED)
		{
			double calculatedScore;
			double recordedSpeed = 2;
			//calculate the score with an non-impactful time and a perfectly matched sentence
			calculatedScore = CheckSentence("Test sentence", 13, "Test sentence", recordedSpeed);
			//check for perfect score
			Assert::AreEqual(1.0,calculatedScore);
		}
		//This test method will test if the calculated score from typing function works properly 
		TEST_METHOD(TypingScoreCalculationFunctionality_INPUT_PerfectMatch_ModerateTime_ModerateScoreOUTPUTTED)
		{
			double calculatedScore;
			double recordedSpeed = 6.5;
			//calculate the score with an non-impactful time and a perfectly matched sentence
			calculatedScore = CheckSentence("Test sentence", 13, "Test sentence", recordedSpeed);
			//check for perfect score
			Assert::AreEqual(0.5, calculatedScore);
		}
		//This test method will test if the calculated score from typing function works properly 
		TEST_METHOD(TypingScoreCalculationFunctionality_INPUT_PerfectMatch_SlowTime_FailedScoreOUTPUTTED)
		{
			double calculatedScore;
			double recordedSpeed = 100;
			//calculate the score with an non-impactful time and a perfectly matched sentence
			calculatedScore = CheckSentence("Test sentence", 13, "Test sentence", recordedSpeed);
			//check for perfect score
			Assert::AreEqual(0.0, calculatedScore);
		}

		//This test method will test if the calculated score from typing function works properly 
		TEST_METHOD(TypingScoreCalculationFunctionality_INPUT_ModerateMatch_FastTime_ModerateScoreOUTPUTTED)
		{
			double calculatedScore;
			double recordedSpeed = 2;
			//calculate the score with an non-impactful time and a perfectly matched sentence
			calculatedScore = CheckSentence("Test sentence", 13, "TeBB sentBBBB", recordedSpeed);
			//check for perfect score
			Assert::AreEqual(0.54, calculatedScore);
		}
		//This test method will test if the calculated score from typing function works properly 
		TEST_METHOD(TypingScoreCalculationFunctionality_INPUT_ModerateMatch_ModerateTime_NearFailedScoreOUTPUTTED)
		{
			double calculatedScore;
			double recordedSpeed = 5;
			//calculate the score with an non-impactful time and a perfectly matched sentence
			calculatedScore = CheckSentence("Test sentence", 13, "TeBB sentBBBB", recordedSpeed);
			//check for perfect score
			Assert::AreEqual(0.15, calculatedScore);
		}
		//This test method will test if the calculated score from typing function works properly 
		TEST_METHOD(TypingScoreCalculationFunctionality_INPUT_ModerateMatch_SlowTime_FailedScoreOUTPUTTED)
		{
			double calculatedScore;
			double recordedSpeed = 100;
			//calculate the score with an non-impactful time and a perfectly matched sentence
			calculatedScore = CheckSentence("Test sentence", 13, "TeBB sentBBBB", recordedSpeed);
			//check for perfect score
			Assert::AreEqual(0.0, calculatedScore);
		}

		//This test method will test if the calculated score from typing function works properly 
		TEST_METHOD(TypingScoreCalculationFunctionality_INPUT_TerribleMatch_FastTime_FailedScoreOUTPUTTED)
		{
			double calculatedScore;
			double recordedSpeed = 2;
			//calculate the score with an non-impactful time and a perfectly matched sentence
			calculatedScore = CheckSentence("Test sentence", 13, "BBBBBBBBBBBBB", recordedSpeed);
			//check for perfect score
			Assert::AreEqual(0.0, calculatedScore);
		}
		//This test method will test if the calculated score from typing function works properly 
		TEST_METHOD(TypingScoreCalculationFunctionality_INPUT_TerribleMatch_ModerateTime_FailedScoreOUTPUTTED)
		{
			double calculatedScore;
			double recordedSpeed = 5;
			//calculate the score with an non-impactful time and a perfectly matched sentence
			calculatedScore = CheckSentence("Test sentence", 13, "BBBBBBBBBBBBB", recordedSpeed);
			//check for perfect score
			Assert::AreEqual(0.0, calculatedScore);
		}
		//This test method will test if the calculated score from typing function works properly 
		TEST_METHOD(TypingScoreCalculationFunctionality_INPUT_TerribleMatch_SlowTime_FailedScoreOUTPUTTED)
		{
			double calculatedScore;
			double recordedSpeed = 100;
			//calculate the score with an non-impactful time and a perfectly matched sentence
			calculatedScore = CheckSentence("Test sentence", 13, "BBBBBBBBBBBBB", recordedSpeed);
			//check for perfect score
			Assert::AreEqual(0.0, calculatedScore);
		}

	};
}
