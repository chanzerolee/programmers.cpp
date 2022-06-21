//LV1 문자열 내 p와 y의 개수
#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int x=0,y=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='p'||s[i]=='P')
                x++;
            else if(s[i]=='y'||s[i]=='Y')
                y++;
        }
    if(x!=y)
        answer=false;
    return answer;
}