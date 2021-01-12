#include <iostream>
#include "rule.h"
#include <vector>
#include <string>

std::vector<Rule> scheme;
int n_rules;
std::string start_str;

void read() {
    std::cout << "Write number of rules in scheme:" << std::endl;
    std::cin >> n_rules;
    std::cout << "Write scheme:" << std::endl;
    scheme.resize(n_rules);
    for (int i = 0; i < n_rules; i++) {
        std::cin >> scheme[i];
    }
    std::cout << "Write starting word:" << std::endl;
    std::cin >> start_str;
}

int main() {
    read();
}
