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
    int iterations = 0;
    while (!ended) {
        if (iterations == MAX_ITERATIONS) {
            return "\\inf";
        }

        bool was_updated = false;
        for (int i = 0; i < n_rules; i++) {
            if (scheme[i].first.empty()) {
                str = scheme[i].second + str;
                was_updated = true;
                if (scheme[i].isEnd()) {
                    ended = true;
                }
                break;
            } else {
                int place = findFirstOccurence(str, scheme[i].first);
                if (place != -1) {
                    str.replace(place, scheme[i].first.size(), scheme[i].second);
                    was_updated = true;
                    if (scheme[i].isEnd()) {
                        ended = true;
                    }
                    break;
                }
            }
        }
        if (!was_updated) {
            ended = true;
        }
        iterations++;
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