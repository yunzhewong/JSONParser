#include <gtest/gtest.h>

// Function to test
int Add(int a, int b) { return a + b; }

// Test cases
TEST(AdditionTest, PositiveNumbers) { EXPECT_EQ(Add(1, 2), 3); }

TEST(AdditionTest, NegativeNumbers) { EXPECT_EQ(Add(-1, -2), -3); }

TEST(AdditionTest, MixedSignNumbers) { EXPECT_EQ(Add(-1, 2), 1); }

TEST(AdditionTest, IncorrectMath) { EXPECT_EQ(Add(2, 2), 5); }
