#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.1 it/Lab 6.1 it.cpp" 
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestGenerateRandom)
		{
			int arr[arraySize];
			generateRandom(arr, arraySize, lowerLimit, upperLimit);

			for (int i = 0; i < arraySize; i++) {
				Assert::IsTrue(arr[i] >= lowerLimit && arr[i] <= upperLimit);
			}
		}
		

		TEST_METHOD(TestReplaceNegative)
		{
			int arr[] = { -3, 4, -5, 7, -2, 10 };
			int size = 6;

			replaceNegative(arr, size);

			for (int i = 0; i < size; i++) {
				Assert::IsTrue(arr[i] >= 0);
			}
		}
	};
}
