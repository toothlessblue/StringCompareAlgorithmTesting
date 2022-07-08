#include <vector>
#include "BoasAlgorithm/BoasAlgorithm.h"
#include "IterativeAlgorithm/IterativeAlgorithm.h"
#include "Timer.h"
#include <iostream>
#include <fstream>

int main() {
    std::vector<StringComparisonAlgorithmBase*> algorithms;
    std::vector<long> times;

    algorithms.push_back(new BoasAlgorithm());
    algorithms.push_back(new IterativeAlgorithm());

    std::ifstream dataFile("data.txt");


    Timer timer;

    for (StringComparisonAlgorithmBase* algorithm : algorithms) {
        timer.start();

        std::string line;
        std::string nextLine;

        std::getline(dataFile, line);

        while (std::getline(dataFile, line)) {

            algorithm->compareStrings(&line[0], line.size(), &line[0], line.size());
        }

        timer.end();

        times.push_back(timer.getDelta());
    }
}