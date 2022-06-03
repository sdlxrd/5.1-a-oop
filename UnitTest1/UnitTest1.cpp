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
			Pay a(0, 0);
			a.setFirst(15);
			a.setSecond(3);
			
			int n = 10;
			Assert::AreEqual(50., a.Sum(10));
		}
	};
}
