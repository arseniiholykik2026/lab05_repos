#include "pch.h"
#include "CppUnitTest.h"
#include "../lw_5.1/lw_5.1.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t = k(1, 1);
			Assert::AreEqual(1.381773291, t, 1e-6);
		}
	};
}
