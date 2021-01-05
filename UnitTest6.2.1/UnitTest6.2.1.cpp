#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab-6.2(1).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest621
{
	TEST_CLASS(UnitTest621)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t[10] = { -6, 5, 0, 11, 1, -15, 6, 9, -1, 10 };

			int iMin = FindMin(t, 10);

			Assert::AreEqual(iMin, 5);
		}
	};
}
