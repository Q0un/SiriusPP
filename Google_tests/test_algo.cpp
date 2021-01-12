//
// Created by qqun on 12.01.2021.
//

#include "gtest/gtest.h"
#include "../algo.h"

TEST(PrefixFunctionTestSuite, 1) {
    EXPECT_EQ(findFirstOccurence("abacaba", "cab"), 3);
}

TEST(PrefixFunctionTestSuite, 2) {
    EXPECT_EQ(findFirstOccurence("ababababb", "baba"), 1);
}

TEST(PrefixFunctionTestSuite, 3) {
    EXPECT_EQ(findFirstOccurence("abcdefgh", "fg"), 5);
}

TEST(PrefixFunctionTestSuite, 4) {
    EXPECT_EQ(findFirstOccurence("baaabacbabc", "abc"), 8);
}

TEST(PrefixFunctionTestSuite, 5) {
    EXPECT_EQ(findFirstOccurence("aaabaabaaaaa", "aaaa"), 7);
}
