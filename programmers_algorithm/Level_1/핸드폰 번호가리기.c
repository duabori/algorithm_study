#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


char* solution(const char* phone_number) {

    int len = strlen(phone_number);
    char* answer = (char*)malloc(20);

    strcpy(answer, phone_number);
    for (int i = 0; i < len - 4; i++)
    {
        answer[i] = '*';
    }
    return answer;
}