//
// Created by qqun on 12.01.2021.
//

#ifndef SIRIUSPP_RULE_H
#define SIRIUSPP_RULE_H

#include <string>
#include <iostream>

class Rule : public std::pair<std::string, std::string> {

public:
    Rule() = default;
    Rule(const std::string &first, const std::string &second);

    friend std::istream& operator>> (std::istream &in, Rule &rule);
};

#endif //SIRIUSPP_RULE_H