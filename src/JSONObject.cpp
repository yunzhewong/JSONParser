
#include "JSONObject.h"

#include <iostream>
#include <string>
#include <vector>

std::string_view consumeWhiteSpace(std::string_view& stringToConsume) {
  while (stringToConsume.length() > 0 && std::isspace(stringToConsume[0])) {
    stringToConsume.remove_prefix(1);
  }

  if (stringToConsume.length() == 0) {
    throw std::runtime_error("Only Whitespace Found");
  }

  return stringToConsume;
}

JSONObject::JSONObject(std::string JSONString) : m_keys({}), m_values({}) {
  char firstChar = JSONString[0];
  if (firstChar != '{') {
    throw std::runtime_error(
        "First character should be the opening curly brace");
  }

  std::string_view initialView(JSONString);
  initialView.remove_prefix(1);

  std::string_view viewWithoutFirstWhiteSpace = consumeWhiteSpace(initialView);
}

const std::vector<std::string>& JSONObject::getKeys() const { return m_keys; }

const std::vector<JSONValue>& JSONObject::getValues() const { return m_values; }

std::string JSONObject::getString() {
  std::string output = "{";

  for (size_t i = 0; i < m_keys.size(); ++i) {
    output += "\t";
    output += m_keys[i];
    output += " : ";
    output += "TEMPORARY_FALLBACK";
    // output += m_values[i];
    output += "\n";
  }

  output += "}";
  return output;
}
