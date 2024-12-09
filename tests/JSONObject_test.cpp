#include "JSONObject.h"

#include <gtest/gtest.h>

#include <string>
#include <vector>

// Test cases
TEST(EmptyJSONObject, Empty) {
  JSONObject jsonObject = JSONObject("{}");

  EXPECT_EQ(jsonObject.getKeys().size(), 0);
  EXPECT_EQ(jsonObject.getValues().size(), 0);
}
