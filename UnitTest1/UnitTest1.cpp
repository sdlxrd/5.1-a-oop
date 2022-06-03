#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Misha\source\repos\5.1 a oop\5.1 a oop\Pay.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pay a(1, 1);

			a.setFirst(2);
			a.setSecond(2);

			Assert::AreEqual(1.0, a.Sum(1));
		}
	};
}
