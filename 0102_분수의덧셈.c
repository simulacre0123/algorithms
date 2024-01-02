#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int numer1, int denom1, int numer2, int denom2) {    

    int* answer = (int*)malloc(2);

    if ((0<numer1<1000)&(0<numer2<1000)&(0<denom1<1000)&(0<denom2<1000)){
        int son, mother, gcd = 1;
        son = numer1 * denom2 + numer2 * denom1;
        mother = denom1 * denom2;

        int i = son > mother ? son : mother;
        //for문에서 1000을 최대라고 생각하면 안 됨. 999*999가 최대일 테니.

        for (i;  i > 0; i--){
            if ((son%i == 0) & (mother%i ==0)){
                gcd = i;
                break;
            }
        }
        son = son / gcd;
        mother = mother / gcd;
        answer[0] = son;
        answer[1] = mother;

        if (answer[1] == 1) {
            int* answer = (int*)malloc(1);
            answer [0] = son;
        }
    }

    return answer;
}
