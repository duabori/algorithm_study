#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {

    bool answer = true;
    int temp = x;
    int sum = 0;

    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }

    if (temp % sum == 0)
    {
        answer = true;
    }
    else
    {
        answer = false;
    }

    return answer;
}