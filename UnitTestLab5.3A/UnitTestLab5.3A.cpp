#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.3A/Lab5.3A.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab53A
{
	TEST_CLASS(UnitTestLab53A)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char g[6] = "g.dat";
			int t = binSearch(g, "1", 1, 1);
			Assert::AreEqual(t, -1);
		}
	};
}
