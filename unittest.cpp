#include "CppUTest/CommandLineTestRunner.h"
#include "bowling.h"

TEST_GROUP(BowlingGameTestGroup){};

TEST(BowlingGameTestGroup, FailTest)
{
    FAIL("Fail me!");
}

int main(int ac, char **av)
{
    return CommandLineTestRunner::RunAllTests(ac, av);
}