//
// Created by ellis on 08/07/2022.
//

#pragma once


class StringComparisonAlgorithmBase {
public:
    virtual bool compareStrings(const char* a, unsigned int aLength, const char* b, unsigned int bLength);
    virtual const char* getName();
};

