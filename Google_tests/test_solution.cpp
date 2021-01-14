//
// Created by qqun on 12.01.2021.
//

#include "gtest/gtest.h"
#include "../natural_algorithm.h"

TEST(SolutionTestSuite, 1) {
    Algorithm algo(3, {Rule("ab", "a", false),
                       Rule("aa", "b", false),
                       Rule("a", "c", false)});
    std::string str = "abacaba";
    EXPECT_EQ(algo.applyAlgo(str), "bcb");
}

TEST(SolutionTestSuite, 2) {
    Algorithm algo(2, {Rule("aaaa", "aaaax", true),
                       Rule("a", "aa", false)});
    std::string str = "a";
    EXPECT_EQ(algo.applyAlgo(str), "aaaax");
}

TEST(SolutionTestSuite, 3) {
    Algorithm algo(2, {Rule("a", "b", false),
                       Rule("c", "d", true)});
    std::string str = "x";
    EXPECT_EQ(algo.applyAlgo(str), "x");
}

TEST(SolutionTestSuite, 4) {
    Algorithm algo(2, {Rule("ab", "c", true),
                       Rule("a", "b", false)});
    std::string str = "aa";
    EXPECT_EQ(algo.applyAlgo(str), "bb");
}

TEST(SolutionTestSuite, 5) {
    Algorithm algo(2, {Rule("a", "b", false),
                       Rule("", "xx", true)});
    std::string str = "aa";
    EXPECT_EQ(algo.applyAlgo(str), "xxbb");
}

TEST(SolutionTestSuite, 6) {
    Algorithm algo(3, {Rule("a", "b", false),
                       Rule("b", "c", false),
                       Rule("", "d", false)});
    std::string str = "abacab";
    EXPECT_EQ(algo.applyAlgo(str), "\\inf");
}

TEST(SolutionTestSuite, 7) {
    Algorithm algo(2, {Rule("a", "", false),
                       Rule("b", "a", false)});
    std::string str = "abbbaba";
    EXPECT_EQ(algo.applyAlgo(str), "");
}

TEST(SolutionTestSuite, 8) {
    Algorithm algo(2, {Rule("abacaba", "", false),
                       Rule("a", "b", false)});
    std::string str = "abacaba";
    EXPECT_EQ(algo.applyAlgo(str), "");
}

TEST(SolutionTestSuite, 9) {
    Algorithm algo(2, {Rule("aba", "x", true),
                       Rule("", "ab", false)});
    std::string str = "a";
    EXPECT_EQ(algo.applyAlgo(str), "x");
}

TEST(SolutionTestSuite, 10) {
    std::vector<Rule> scheme;
    for (char i = 'a'; i < 'z'; i++) {
        std::string x(1, i);
        std::string y(1, i + 1);
        scheme.emplace_back(x, y);
    }
    Algorithm algo(25, scheme);
    std::string str = "aaa";
    EXPECT_EQ(algo.applyAlgo(str), "zzz");
}