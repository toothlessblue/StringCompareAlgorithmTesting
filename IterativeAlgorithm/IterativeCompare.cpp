//
// Created by ellis on 08/07/2022.
//

#include "./IterativeAlgorithm.h"

bool IterativeAlgorithm::compareStrings(const char* a, unsigned int aLength, const char* b, unsigned int bLength) {
    if (aLength != bLength) return false;

    for (unsigned int i = 0; i < aLength; i++) {
        if (a[i] != b[i]) return false;
    }

    return true;
}

const char* IterativeAlgorithm::getName() {
    return "Iterative";
}
