//LV_1자릿수 더하기
#include <iostream>

using namespace std;
int solution(int n)
{  int answer = 0;
    while(true){
        if(n/10!=0){
            answer+=(n%10);
        }
        else{
            answer+=n%10;
            break;
        }
        n/=10;
    }
    return answer;
}