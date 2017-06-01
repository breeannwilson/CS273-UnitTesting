#include "stdafx.h"
#include "CppUnitTest.h"
#include "Triangle.h"
#include "Square.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTester
{		
	TEST_CLASS(TriangleTest)		//This is our test suite for testing isTriangle()
	{
	public:

		TEST_METHOD(AllDifferent)   //Test Case 1: all the sides are different
		{
			//We are checking that isTriangle() should return true
			Assert::AreEqual(isTriangle(3, 4, 5), true);
		}

		TEST_METHOD(TooLong)		//Test Case 2: one side is too long
		{
			//We are checking that isTriangle() should return false
			Assert::AreEqual(isTriangle(3, 3, 7), false);
		}

		TEST_METHOD(Zeros)			//Test Case 3: all sides zero
		{
			//We are checking that isTriangle() should return false
			Assert::AreEqual(isTriangle(0, 0, 0), false);
		}

		TEST_METHOD(Negatives)		//Test Case 4: all sides negative
		{
			//We are checking that isTriangle() should return false
			Assert::AreEqual(isTriangle(-1, -1, -1), false);
		}
	};


	TEST_CLASS(SquaresTest) {		//This is the test class for isSquare()
	public:
		
		TEST_METHOD(AllSame)		//Test Case 1: all sides are the same length (& positive)
		{
			//We are checking that isSquare() should return true
			Assert::AreEqual(isSquare(4, 4, 4, 4), true);
		}

		TEST_METHOD(Zeros)			//Test Case 2: all sides are zeros
		{
			//We are checking that isSquare() should return false
			Assert::AreEqual(isSquare(0, 0, 0, 0), false);
		}

		TEST_METHOD(Negatives)		//Test Case 3: all sides are negative
		{
			//We are checking that isSquare() should return false
			Assert::AreEqual(isSquare(-1, -1, -1, -1), false);
		}


	};
}