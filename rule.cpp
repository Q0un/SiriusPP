//
// Created by qqun on 12.01.2021.
//

#include "rule.h"

Rule::Rule(const std::string &first, const std::string &second) : std::pair<std::string, std::string>(first, second) {}

std::istream& operator>> (std::istream &in, Rule &rule) {
    in >> rule.first >> rule.second;
    return in;
}