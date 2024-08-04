//
// Created by Damien on 04.08.2024.
//

#ifndef LOGGER_H
#define LOGGER_H

#pragma once

#ifdef LOGGER_EXPORTS
#define LOGGER_API __declspec(dllexport)
#else
#define LOGGER_API __declspec(dllimport)
#endif

#include <string>

class LOGGER_API Logger {
public:
    static void Initialize();
    static void Shutdown();
    static void Log(const std::string& message);
};


#endif //LOGGER_H
