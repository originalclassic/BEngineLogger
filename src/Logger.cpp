#include "Logger.h"
#include <iostream>

void Logger::Initialize() {
    // Initialization code for the logger
    std::cout << "Logger Initialized" << std::endl;
}

void Logger::Shutdown() {
    // Cleanup code for the logger
    std::cout << "Logger Shutdown" << std::endl;
}

void Logger::Log(const std::string& message) {
    std::cout << "Log: " << message << std::endl;
}
