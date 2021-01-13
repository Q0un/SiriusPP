//
// Created by qqun on 12.01.2021.
//

#ifndef SIRIUSPP_NATURAL_ALGORITHM_H
#define SIRIUSPP_NATURAL_ALGORITHM_H

#include <vector>
#include <string>
#include <iostream>
#include "rule.h"

class Algorithm {
    std::vector<Rule> scheme;
    int n_rules;
    const int MAX_ITERATIONS = 10000;

public:
    Algorithm() = default;
    Algorithm(int n_rules, std::vector<Rule> scheme);

    void setNRules(int val);
    void setScheme(const std::vector<Rule> &val);

    std::string applyAlgo(std::string str) const;

    friend std::istream& operator>> (std::istream &in, Algorithm &algo);
};

#endif //SIRIUSPP_NATURAL_ALGORITHM_H
