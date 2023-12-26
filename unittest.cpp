#include "CppUTest/CommandLineTestRunner.h"
#include "fizzbuzz.h"

TEST_GROUP(FizzBuzzTestGroup){};

TEST(FizzBuzzTestGroup, TestFail)
{
    FAIL("Fail me!");
}

int main(int ac, char **av)
{
    return CommandLineTestRunner::RunAllTests(ac, av);
}