#include "log_converter.h"
#include <cassert>
int main() {
    LogConverter converter;
    std::vector<std::string> logs = {"Log1", "Log2"};
    std::vector<std::string> expected_logs = {"Converted: Log1", "Converted: Log2"};
    assert(converter.convert(logs) == expected_logs);
    return 0;
}