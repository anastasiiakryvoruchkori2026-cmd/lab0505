#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab0505/lab0505.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest0505
{
	TEST_CLASS(UnitTest0505)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int depth = 0;
			double t;
			t = a(3, 2.0, 3.0, 1, depth);
			Assert::AreEqual(t, 8.0);
		}

		TEST_METHOD(TestMethod2)
		{
			int depth = 0;
			double t;
			t = S(3, 2.0, 3.0, 1, depth);
			Assert::AreEqual(t, 15.0);
		}
	};
}
