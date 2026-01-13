#include "usage.hpp"
#include "gtest/gtest.h"

struct ErrorCase {
    const char *arg;
    int expected;
};

class ErrorHandlingHelpTest : public ::testing::TestWithParam<ErrorCase> {};

TEST_P(ErrorHandlingHelpTest, HandleCorrectHelpFlags) {
    const auto &param = GetParam();
    const char *argv[] = { "./plazza",  param.arg};

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
