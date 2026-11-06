#include "log_converter.h"
std::vector<std::string> LogConverter::convert(const std::vector<std::string>& logs) {
    std::vector<std::string> converted_logs;
    for (const auto& log : logs) {
        converted_logs.push_back("Converted: " + log);
    }
    return converted_logs;
}