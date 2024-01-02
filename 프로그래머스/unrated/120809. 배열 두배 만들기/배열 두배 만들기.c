#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int* solution(int numbers[], size_t numbers_len) {
    int* answer = (int*)malloc(sizeof(int) * numbers_len);
    
    for (int i = 0; i < numbers_len ; i++){
        if (-10000 <= numbers[i] <= +10000)
            {answer[i] = 2 * numbers[i];}
    }
    return answer;
}