#include <vector>
#include "BoasAlgorithm/BoasAlgorithm.h"
#include "IterativeAlgorithm/IterativeAlgorithm.h"
#include "Timer.h"
#include <iostream>
#include <fstream>
#include <csignal>

int main() {
    char buff[FILENAME_MAX]; //create string buffer to hold path
    getcwd( buff, FILENAME_MAX );
    std::string current_working_dir(buff);
    std::cout << current_working_dir << std::endl;

    std::vector<StringComparisonAlgorithmBase*> algorithms;

    algorithms.push_back(new BoasAlgorithm());
    algorithms.push_back(new IterativeAlgorithm());


    Timer timer;

    for (StringComparisonAlgorithmBase* algorithm : algorithms) {
        long time = 0;
        unsigned int shortcuts = 0;

        std::string line;
        std::string nextLine;

        std::ifstream dataFile("../data.txt");

        while (std::getline(dataFile, nextLine)) {
            timer.start();
            algorithm->compareStrings(&line[0], line.size(), &nextLine[0], nextLine.size());
            timer.end();

            if (line.size() != nextLine.size()) {
                shortcuts++;
            }

            time += timer.getDelta();

            line = nextLine;
        }


        std::cout << algorithm->getName() << ": " << time / 1000 << "μs, with " << shortcuts << " shortcuts."<<  std::endl;
    }
}