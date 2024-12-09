
#include "JSONObject.h"

#include <iostream>
#include <string>
#include <vector>

JSONObject::JSONObject(std::string JSONString) : m_keys({}), m_values({}) {}

const std::vector<std::string>& JSONObject::getKeys() const { return m_keys; }

const std::vector<JSONValue>& JSONObject::getValues() const { return m_values; }