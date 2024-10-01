#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB5.1/lab5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestlab51
{
	TEST_CLASS(UnitTestlab51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = f(1, 1, 1);
			double expected = 1.75636;
			double tolerance = 0.000001; // Похибка
			Assert::IsTrue(abs(t - expected) < tolerance);                 
		}
	};
}
