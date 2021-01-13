#include <fstream>
#include <string>
#include "natural_algorithm.h"

Algorithm algo;
std::string start_str;

void read(std::ifstream &in) {
    in >> algo;
    in >> start_str;
}

int main() {
    std::ifstream in("./interface/input.txt");
    std::ofstream out("./interface/output.txt");
    read(in);
    std::string res = algo.applyAlgo(start_str);
    if (res == "\\inf") {
        out << "Infinite or too many iterations." << std::endl;
    } else if (res.empty()) {
        out << "\\eps" << std::endl;
    } else {
        out << res << std::endl;
    }
}
