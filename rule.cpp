//
// Created by qqun on 12.01.2021.
//

#include "rule.h"

Rule::Rule() : std::pair<std::string, std::string>() {
    end = false;
}

Rule::Rule(const std::string &first, const std::string &second) : std::pair<std::string, std::string>(first, second) {
    end = false;
}

void Rule::setEnd(bool val) {
    end = val;
}

bool Rule::isEnd() const {
    return end;
}

std::istream& operator>> (std::istream &in, Rule &rule) {
    std::string arrow;
    in >> rule.first >> arrow >> rule.second;
    if (arrow.back() == '.') {
        rule.setEnd(true);
    }
    return in;
}