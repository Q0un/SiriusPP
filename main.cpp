#include <iostream>
#include <string>
#include "natural_algorithm.h"

Algorithm algo;
std::string start_str;

void read() {
    std::cin >> algo;
    std::cin >> start_str;
}

int main() {
    read();
    std::cout << algo.applyAlgo(start_str) << std::endl;
}
