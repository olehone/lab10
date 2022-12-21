#include "pch.h"
#include "CppUnitTest.h"
#include "../Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int jpos = 0;
			int ipos = 0;
			char fname[11] = "text1";
			ProcessTXT(fname, ipos, jpos);
			Assert::AreEqual(jpos, 4);
		}
	};
}
