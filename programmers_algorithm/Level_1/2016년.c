#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int a, int b) {
    char* arr[] = { "FRI", "SAT","SUN","MON", "TUE", "WED","THU" };

    // 리턴할 값은 메모리를 동적 할당해주세요.
    char* answer = (char*)malloc(sizeof(arr));

    int final_day[20] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int total_day = 0;

    for (int i = 0; i < a - 1; i++) {
        total_day += final_day[i];
    }

    total_day += b - 1;
    answer = arr[total_day % 7];

    return answer;
}