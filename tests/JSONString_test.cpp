#include "JSONString.h"

#include <gtest/gtest.h>

#include <string>
#include <vector>

// Test cases
TEST(InvalidStringTests, NotQuotationStart) {
  std::string_view empty = "";
  EXPECT_THROW(consumeString(empty), std::runtime_error);

  std::string_view startWithSpace = " \"";
  EXPECT_THROW(consumeString(startWithSpace), std::runtime_error);
};

TEST(InvalidStringTests, NoEnd) {
  std::string_view noEnd = "\"    ";
  EXPECT_THROW(consumeString(noEnd), std::runtime_error);
}

TEST(ValidStringTests, RemovedDoubleQuotes) {
  std::string_view hello_string = "\"hello\"}";

  auto [remaining_view, output_string] = consumeString(hello_string);

  EXPECT_EQ(output_string, "hello");
  EXPECT_EQ(remaining_view[0], '}');
}
