#include <stdio.h>
#include <stdlib.h>

#define TEN 10

int* solution(long long num) {

	int* arr = (int*)malloc(sizeof(int) * 11);

	for (int i = 0; i < 11; i++) 
	{
		arr[i] = num % TEN;
		num /= TEN;
	}
	return arr;
}