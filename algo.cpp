//
// Created by qqun on 12.01.2021.
//

#include "algo.h"
#include <vector>

int findFirstOccurence(const std::string &s, const std::string &sub) {
    std::string st = sub + '#' + s;
    int len = st.size();
    std::vector<int> pref_f(len);
    for (int i = 1; i < len; i++) {
        int j = pref_f[i - 1];
        while (j > 0 && st[i] != st[j])
            j = pref_f[j - 1];
        if (st[i] == st[j]) {
            j++;
        }
        pref_f[i] = j;
    }
    for (int i = 0; i < len; i++) {
        if (pref_f[i] == sub.size()) {
            return i - 2 * sub.size();
        }
    }
    return -1;
}