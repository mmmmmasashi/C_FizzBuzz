#include <stdio.h>
#include "fizzbuzz.h"

int main(void)
{
    const int RepeatCount = 100;
    for (int i = 0; i < RepeatCount; i++)
    {
        int number = i + 1;
        char buffer[100]; // 十分とっておく
        ToFizzBuzzNumber(number, buffer, sizeof(buffer));
        printf("%s\n", buffer);
    }
    return 0;
}