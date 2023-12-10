#include "CppUTest/CommandLineTestRunner.h"
#include "fizzbuzz.h"

TEST_GROUP(FizzBuzzTestGroup){};

/// @brief 3の倍数の場合はFizzを返す
TEST(FizzBuzzTestGroup, ReturnsFizzWhenMultipleOf3)
{
    char buffer[10];
    ToFizzBuzzNumber(3, buffer, sizeof(buffer));
    STRCMP_EQUAL("Fizz", buffer);
}

/// @brief 5の倍数の場合はBuzzを返す
TEST(FizzBuzzTestGroup, ReturnsFizzWhenMultipleOf5)
{
    char buffer[10];
    ToFizzBuzzNumber(5, buffer, sizeof(buffer));
    STRCMP_EQUAL("Buzz", buffer);
}

/// @brief  3と5の倍数の場合はFizzBuzzを返す
TEST(FizzBuzzTestGroup, ReturnsFizzBuzzWhenMultipleOf3And5)
{
    char buffer[10];
    ToFizzBuzzNumber(15, buffer, sizeof(buffer));
    STRCMP_EQUAL("FizzBuzz", buffer);
}

/// @brief  3でも5でもない場合はそのままの数値を文字列に変換して返す
TEST(FizzBuzzTestGroup, ReturnsNumberWhenNotMultipleOf3And5)
{
    char buffer[10];
    ToFizzBuzzNumber(1, buffer, sizeof(buffer));
    STRCMP_EQUAL("1", buffer);

    ToFizzBuzzNumber(2, buffer, sizeof(buffer));
    STRCMP_EQUAL("2", buffer);

    ToFizzBuzzNumber(7, buffer, sizeof(buffer));
    STRCMP_EQUAL("7", buffer);
}

int main(int ac, char **av)
{
    return CommandLineTestRunner::RunAllTests(ac, av);
}