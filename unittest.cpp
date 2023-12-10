#include "CppUTest/CommandLineTestRunner.h"
#include "fizzbuzz.h"

TEST_GROUP(FizzBuzzTestGroup){};

TEST(FizzBuzzTestGroup, ReturnsFizzWhenMultipleOfThree)
{
    char buffer[10];
    ToFizzBuzzNumber(3, buffer, sizeof(buffer));
    STRCMP_EQUAL("Fizz", buffer);
}

int main(int ac, char **av)
{
    return CommandLineTestRunner::RunAllTests(ac, av);
}