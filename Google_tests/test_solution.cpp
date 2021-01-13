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