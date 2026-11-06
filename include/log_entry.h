#ifndef LOG_ENTRY_H
#define LOG_ENTRY_H
#include <string>
struct LogEntry {
    std::string ip;
    std::string timestamp;
    std::string request;
    int status_code;
    size_t response_size;
};
#endif