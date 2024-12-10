#include "JSONObject.h"

#include <gtest/gtest.h>

#include <string>
#include <vector>

// Test cases
TEST(EmptyJSONObject, Empty) {
  JSONObject jsonObject = JSONObject("{}");

  ASSERT_EQ(jsonObject.getKeys().size(), jsonObject.getValues().size());
  EXPECT_EQ(jsonObject.getKeys().size(), 0);
  EXPECT_EQ(jsonObject.getValues().size(), 0);
  EXPECT_EQ(jsonObject.getString(), "{}");
}

TEST(IncorrectJSONObject, WrongStart) {
  EXPECT_THROW(JSONObject("}"), std::runtime_error);
}

TEST(IncorrectJSONObject, TrailingWhiteSpaceAfterFirstBrace) {
  EXPECT_THROW(JSONObject("{      "), std::runtime_error);
}