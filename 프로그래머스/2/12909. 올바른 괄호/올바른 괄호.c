#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {
    bool answer = false;
    int str_size = strlen(s);
    int a = 0;
    
    if ((s[0]=='(')&&(s[str_size-1]==')')&&((str_size%2)==0)){
        for (int idx=0; idx<str_size; idx++){
            if (s[idx]=='('){
                a++;
            }
            else if (s[idx]==')'){
                a--;
                if ((a==0) && (s[idx]==s[idx+1])){return false;}
            }
        }
        if (a == 0){
            return true;
        }
    }
    
    return answer;
}