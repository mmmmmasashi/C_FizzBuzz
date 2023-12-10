#include "CppUTest/CommandLineTestRunner.h"

TEST_GROUP(FirstTestGroup){};

TEST(FirstTestGroup, FirstTest)
{
    FAIL("Fail me!");
}

TEST(FirstTestGroup, SecondTest)
{
    STRCMP_EQUAL("hello world!", "hello world!");
}

int main(int ac, char **av)
{
    return CommandLineTestRunner::RunAllTests(ac, av);
}