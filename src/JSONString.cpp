#include "JSONString.h"

#include <stdexcept>
#include <string>
#include <tuple>

std::tuple<std::string_view, std::string> consumeString(std::string_view view) {
  if (view.length() == 0 || view[0] != '"') {
    throw std::runtime_error("String should start with Double Quotations");
  }

  view.remove_prefix(1);

  size_t string_length = 0;
  while (string_length < view.length() && view[string_length] != '\"') {
    ++string_length;
  }

  if (string_length == view.length()) {
    throw std::runtime_error("Expected to find second quotation");
  }

  std::string output_string = std::string(view.substr(0, string_length));

  // consume the second quotation as well
  view.remove_prefix(string_length + 1);
  return std::make_tuple(view, output_string);
}