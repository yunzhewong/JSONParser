#include <string>
#include <vector>

#ifndef EXTERNAL_H
#define EXTERNAL_H

class JSONValue {};

class JSONObject {
 private:
  std::vector<std::string> m_keys;
  std::vector<JSONValue> m_values;

 public:
  JSONObject(std::string JSONString);
  const std::vector<std::string>& getKeys() const;
  const std::vector<JSONValue>& getValues() const;
};

#endif