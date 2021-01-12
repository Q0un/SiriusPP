//
// Created by qqun on 12.01.2021.
//

#include "solution.h"
#include "rule.h"
#include "string_util.h"
#include <iostream>
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

void solve() {
    std::string cur_str = start_str;
    bool ended = false;
    while (!ended) {
        bool was_updated = false;
        for (int i = 0; i < n_rules; i++) {
            int place = findFirstOccurence(cur_str, scheme[i].first);
            if (place != -1) {
                was_updated = true;
                cur_str.replace(place, scheme[i].first.size(), scheme[i].second);
                if (scheme[i].isEnd()) {
                    ended = true;
                }
                break;
            }
        }
        if (!was_updated) {
            ended = true;
        }
    }
    std::cout << "Result:" << std::endl;
    std::cout << cur_str << std::endl;
}