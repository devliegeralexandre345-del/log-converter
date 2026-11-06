#include "log_converter.h"
#include <iostream>
int main() {
    LogConverter converter;
    std::vector<std::string> logs = {"Log1", "Log2", "Log3"};
    std::vector<std::string> converted_logs = converter.convert(logs);
    for (const auto& log : converted_logs) {
        std::cout << log << std::endl;
    }
    return 0;
}