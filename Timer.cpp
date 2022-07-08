//
// Created by ellis on 08/07/2022.
//

#include <chrono>
#include "./Timer.h"

void Timer::start() {
    this->startTime = std::chrono::high_resolution_clock::now();
}

void Timer::end() {
    this->endTime = std::chrono::high_resolution_clock::now();
}

long Timer::getDelta() {
    return std::chrono::duration_cast<std::chrono::nanoseconds>(this->endTime - this->startTime).count();
}