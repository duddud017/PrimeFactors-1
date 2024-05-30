#include "pch.h"
#include "../Primefactor/prime-factors.cpp"
using namespace std;

class PrimefactorFixture : public testing::Test {
public:
	PrimeFactor primefactor;
	vector<int> expected;
};

TEST_F(PrimefactorFixture, of1) {
	expected = {};
	EXPECT_EQ(expected, primefactor.of(1));
}

TEST_F(PrimefactorFixture, of2) {
	expected = { 2 };
	EXPECT_EQ(expected, primefactor.of(2));
}

TEST_F(PrimefactorFixture, of3) {
	expected = { 3 };
	EXPECT_EQ(expected, primefactor.of(3));
}

TEST_F(PrimefactorFixture, of4) {
	expected = { 2, 2 };
	EXPECT_EQ(expected, primefactor.of(4));
}

TEST_F(PrimefactorFixture, of6) {
	expected = { 2, 3 };
	EXPECT_EQ(expected, primefactor.of(6));
}

TEST_F(PrimefactorFixture, of7) {
	expected = { 3, 3 };
	EXPECT_EQ(expected, primefactor.of(9));
}

TEST_F(PrimefactorFixture, of12) {
	expected = { 2,2, 3 };
	EXPECT_EQ(expected, primefactor.of(12));
}