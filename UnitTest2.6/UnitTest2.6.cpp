#include "pch.h"
#include "CppUnitTest.h"
#include "../2.6/ComplexC.h"
#include "../2.6/ComplexC.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest26
{
	TEST_CLASS(UnitTest26)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ComplexC c(1.0, 2.0);
			Assert::AreEqual(1.0, c.getRe());
			Assert::AreEqual(2.0, c.getIm());
		}
	};
}
