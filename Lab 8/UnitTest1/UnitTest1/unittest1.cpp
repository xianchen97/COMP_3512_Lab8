
#include "CppUnitTest.h"
#include "../../Lab 8/FixedList.hpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
		FixedList<int, 5> v;
	public:
		
		TEST_METHOD(TestMethod1)
		{
			v.add(1);
		}

	};
}