//
// Created by qqun on 12.01.2021.
//

#include "gtest/gtest.h"
#include "../algo.h"

TEST(PrefixFunctionTestSuite, 1) {
    EXPECT_EQ(findFirstOccurence("abacaba", "cab"), 3);
}
