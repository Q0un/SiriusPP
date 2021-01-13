//
// Created by qqun on 12.01.2021.
//

#include "natural_algorithm.h"

#include <utility>
#include "string_util.h"

Algorithm::Algorithm(int n_rules, std::vector<Rule> scheme) : n_rules(n_rules), scheme(std::move(scheme)) {}

void Algorithm::setNRules(int val) {
    n_rules = val;
}

void Algorithm::setScheme(const std::vector<Rule> &val) {
    scheme = val;
}

std::string Algorithm::applyAlgo(std::string str) const {
    bool ended = false;
    while (!ended) {
        bool was_updated = false;
        for (int i = 0; i < n_rules; i++) {
            int place = findFirstOccurence(str, scheme[i].first);
            if (place != -1) {
                was_updated = true;
                str.replace(place, scheme[i].first.size(), scheme[i].second);
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
    return str;
}

std::istream& operator>> (std::istream &in, Algorithm &algo) {
    in >> algo.n_rules;
    algo.scheme.resize(algo.n_rules);
    for (int i = 0; i < algo.n_rules; i++) {
        in >> algo.scheme[i];
    }
    return in;
}