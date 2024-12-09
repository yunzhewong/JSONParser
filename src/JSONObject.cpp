
#include "JSONObject.h"

#include <iostream>
#include <string>
#include <vector>

JSONObject::JSONObject(std::string JSONString) : m_keys({}), m_values({}) {}

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