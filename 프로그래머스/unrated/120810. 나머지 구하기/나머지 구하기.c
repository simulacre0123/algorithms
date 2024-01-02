#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    int answer = -1;
    if ((0 < num1 <= 100) & (0 < num1 <= 100))
        {answer = num1 % num2;}
    return answer;
}