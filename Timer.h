//
// Created by ellis on 08/07/2022.
//

#pragma once
#include <chrono>

class Timer {
private:
    std::chrono::high_resolution_clock clock;

    std::chrono::time_point<std::chrono::system_clock, std::chrono::duration<long,std::ratio<1,1000000000>>> startTime;
    std::chrono::time_point<std::chrono::system_clock, std::chrono::duration<long,std::ratio<1,1000000000>>> endTime;
public:
    void start();

    void end();

    long getDelta();
};
