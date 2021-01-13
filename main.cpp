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
    std::string res = algo.applyAlgo(start_str);
    if (res == "\\inf") {
        std::cout << "Infinite or too many iterations." << std::endl;
    } else if (res.empty()) {
        std::cout << "\\eps" << std::endl;
    } else {
        std::cout << res << std::endl;
    }
}
