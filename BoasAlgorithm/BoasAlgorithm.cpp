//
// Created by ellis on 08/07/2022.
//

#include <cstdlib>
#include <iostream>
#include "./BoasAlgorithm.h"

bool BoasAlgorithm::compareStrings(const char* a, unsigned int aLength, const char* b, unsigned int bLength) {
    if (aLength != bLength) return false;
    unsigned int index = rand() % (aLength - 1);

    unsigned int i = index;

    do {
        if (i >= aLength) i = 0;

        if (a[i] != b[i]) return false;

        i++;
    } while (i != index);

    return true;
}

const char* BoasAlgorithm::getName() {
    return "Boas";
}
