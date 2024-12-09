#include <gtest/gtest.h>

#include "external.h"

// Test cases
TEST(AdditionTest, PositiveNumbers) { EXPECT_EQ(Add(1, 2), 3); }

TEST(AdditionTest, NegativeNumbers) { EXPECT_EQ(Add(-1, -2), -3); }

TEST(AdditionTest, MixedSignNumbers) { EXPECT_EQ(Add(-1, 2), 1); }

// TEST(AdditionTest, IncorrectMath) { EXPECT_EQ(Add(2, 2), 5); }
