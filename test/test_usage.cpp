#include "usage.hpp"
#include "gtest/gtest.h"

TEST(ErrorHandling, HandleCorrectInput) {
    const char *argv[] = { "./project_name" };

    EXPECT_EQ(errorHandling(1, argv), 0);
}

struct ErrorCase {
    const char *arg;
    int expected;
};

class ErrorHandlingHelpTest : public ::testing::TestWithParam<ErrorCase> {};

TEST_P(ErrorHandlingHelpTest, HandleHelpFlags) {
    const auto &param = GetParam();
    const char *argv[] = { "./project_name",  param.arg};

    EXPECT_EQ(errorHandling(2, argv), param.expected);
}

INSTANTIATE_TEST_SUITE_P(
    HelpFalgs,
    ErrorHandlingHelpTest,
    ::testing::Values(
        ErrorCase{ "-h", 1 },
        ErrorCase{ "--help", 1 },
        ErrorCase{ "--h", -1 },
        ErrorCase{ "-help", -1 },
        ErrorCase{ "help", -1 },
        ErrorCase{ "test", -1 },
        ErrorCase{ "-x", -1 }
    )
);
