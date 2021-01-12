//
// Created by qqun on 12.01.2021.
//

#ifndef SIRIUSPP_RULE_H
#define SIRIUSPP_RULE_H

#include <string>
#include <iostream>

class Rule : public std::pair<std::string, std::string> {
    bool end;

public:
    Rule();
    Rule(const std::string &first, const std::string &second);

    void setEnd(bool val);
    bool isEnd() const;

    friend std::istream& operator>> (std::istream &in, Rule &rule);
};

#endif //SIRIUSPP_RULE_H