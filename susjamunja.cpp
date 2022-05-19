//LV1_숫자 문자열과 영단어
#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    string a;
    int i=0;
    while(s.length()>i){
     if(s[i]>='0'&&s[i]<='9'){
         a+=s[i];
     }
     else{
        if(s[i]=='o'){
            a+='1';
            i+=2;}
        else if(s[i]=='z'){
            a+='0';
            i+=3;
        }
        else if(s[i]=='t'&&s[i+1]=='w'){
            a+='2';
            i+=2;
        }
        else if(s[i]=='t'){
            a+='3';
            i+=4;
        }
        else if(s[i]=='f'&&s[i+1]=='o'){
            a+='4';
            i+=3;
        }
        else if(s[i]=='f'){
            a+='5';
            i+=3;
        }
        else if(s[i]=='s'&&s[i+1]=='i'){
            a+='6';
            i+=2;
        }
        else if(s[i]=='s'){
            a+='7';
            i+=4;
        }
        else if(s[i]=='e'){
            a+='8';
            i+=4;
        }
        else if(s[i]=='n'){
            a+='9';
            i+=3;
        }}
        i++;
    }
    answer=stoi(a);
    return answer;
}