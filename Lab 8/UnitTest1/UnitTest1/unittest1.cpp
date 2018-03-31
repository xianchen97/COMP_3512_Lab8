
#include "CppUnitTest.h"
#include "../../Lab 8/FixedList.hpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
		FixedList<int, 5> v;
		FixedList<char, 3> q;
	public:
		
		TEST_METHOD(TestMethod1)
		{
			v.add(1);
			v.add(1);
			Assert::AreEqual((size_t)2, v.sizeCalc());
		}

		TEST_METHOD(TestMethod2)
		{
			v.add(1);
			v.add(1);
			v.add(2);
			Assert::AreEqual((size_t)5, v.capacityCalc());
		}

		TEST_METHOD(TestMethod3)
		{
			Assert::AreEqual(1, v.get(2));
		}

		TEST_METHOD(TestMethod4)
		{
			Assert::AreEqual(1, v.getFirstIndex(1));
		}
	
	};
}