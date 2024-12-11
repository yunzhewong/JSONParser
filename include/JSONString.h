#include <string>
#include <vector>

#ifndef JSON_STRING_H
#define JSON_STRING_H

std::tuple<std::string_view, std::string> consumeString(std::string_view view);

#endif