#include "CppUTest/CommandLineTestRunner.h"
#include "fizzbuzz.h"

TEST_GROUP(SampleTestGroup){};

TEST(SampleTestGroup, AlwaysFailsFunction)
{
    STRCMP_EQUAL("TextA", "TextB");
}

TEST(SampleTestGroup, AlwaysSuccessFunction)
{
    CHECK_EQUAL(1, 1);
}

int main(int ac, char **av)
{
    return CommandLineTestRunner::RunAllTests(ac, av);
}