#include <stdio.h>

#include "fizzbuzz.h"

/// @brief FizzBuzzのルールに従い、指定された数値を文字列に変換する
/// @param number 数値
/// @param buffer 文字列を格納するバッファ
/// @param buffer_size バッファのサイズ(文字列の最大長)
void ToFizzBuzzNumber(int number, char *buffer, int buffer_size)
{
    if (number % 15 == 0)
    {
        snprintf(buffer, buffer_size, "FizzBuzz");
    }
    else if (number % 5 == 0)
    {
        snprintf(buffer, buffer_size, "Buzz");
    }
    else if (number % 3 == 0)
    {
        snprintf(buffer, buffer_size, "Fizz");
    }
    else
    {
        snprintf(buffer, buffer_size, "%d", number);
    }
}
