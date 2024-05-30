#include "pch.h"
#include "../Primefactor/prime-factors.cpp"
using namespace std;

TEST(Primefactors, of1) {
	PrimeFactor primefactor;
	vector<int> expected{};
	EXPECT_EQ(expected, primefactor.of(1));
}