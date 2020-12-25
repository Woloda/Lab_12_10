#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_12.10/Lab_12.10.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab1210
{
	TEST_CLASS(UnitTestLab1210)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int level{};
			Derevo* node{},
				  * vood{};

			INF value;
			bool found = false;

			BinarySearchInsert(node, 7, found);
			BinarySearchInsert(node, -1, found);
			BinarySearchInsert(node, 11, found);
			BinarySearchInsert(node, 9, found);

			BalanceHeight(node);

			vood = FindMax(node, level);

			Assert::AreEqual(vood->kluch_d, 11);
		}
	};
}
