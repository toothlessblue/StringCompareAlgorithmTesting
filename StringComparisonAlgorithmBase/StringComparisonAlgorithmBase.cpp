//
// Created by ellis on 08/07/2022.
//

#include <iostream>
#include "StringComparisonAlgorithmBase.h"

bool StringComparisonAlgorithmBase::compareStrings(const char* a, unsigned int aLength, const char* b, unsigned int bLength) {
    std::cerr << "compareStrings not overridden" << std::endl;
    return false;
}

const char* StringComparisonAlgorithmBase::getName() {
    return "Base";
}
