//
// Created by ellis on 08/07/2022.
//

#pragma once

#include "../StringComparisonAlgorithmBase/StringComparisonAlgorithmBase.h"

class BoasAlgorithm : public StringComparisonAlgorithmBase {
public:
    bool compareStrings(const char* a, unsigned int aLength, const char* b, unsigned int bLength) override;
    const char* getName() override;
};