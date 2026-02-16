#define UNIT_TEST
#include "pch.h"
#include "../nwd4tip/nwd4tip.cpp"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace nwd4tipTests
{
	TEST_CLASS(nwd4tipTests)
	{
	public:
		
		TEST_METHOD(TestNWD_Odejmowanie)
		{
			//AAA
			//Arrange - przygotowanie danych
			int a = 35;
			int b = 75;

			//Act - wywo³anie funkcji
			int result = obliczNWD(a, b);

			//Assert - sprawdzenie wyniku
			Assert::AreEqual(5, result);
		}

		TEST_METHOD(TestNWD_Odejmowanie_Ujmenne)
		{
			Assert::AreEqual(6, obliczNWD(-12,18));
		}

		TEST_METHOD(NWD_Podstawowy)
		{
			Assert::AreEqual(5, NWD::rekurencja(35, 75));
		}

		//Warunki brzegowe
		TEST_METHOD(NWD_LiczyRowne)
		{
			Assert::AreEqual(12, NWD::rekurencja(12, 12));
		}

		TEST_METHOD(NWD_JednoZero)
		{
			Assert::AreEqual(7, NWD::rekurencja(0, 7));
			Assert::AreEqual(7, NWD::rekurencja(7, 0));
		}

		TEST_METHOD(NWD_DwaZera)
		{
			Assert::AreEqual(0, NWD::rekurencja(0, 0));
			Assert::AreEqual(0, NWD::rekurencja(0, 0));
		}

		TEST_METHOD(NWD_LiczbyUjemne)
		{
			Assert::AreEqual(6, NWD::rekurencja(-12, 18));
			Assert::AreEqual(6, NWD::rekurencja(12, -18));
			Assert::AreEqual(6, NWD::rekurencja(-12, -18));
		}

		TEST_METHOD(NWD_Wielokrotnosc)
		{
			Assert::AreEqual(5, NWD::rekurencja(5, 25));
		}

		TEST_METHOD(NWD_WzgledniePierwsze)
		{
			Assert::AreEqual(1, NWD::rekurencja(17, 29));
		}

		TEST_METHOD(NWD_OdwroconaKolejnosc)
		{
			Assert::AreEqual(6, NWD::rekurencja(18, 12));
		}
	};
}
