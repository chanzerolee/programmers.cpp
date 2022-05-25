//가운데 글자 가져오기
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int c=s.size()/2;
    if(s.size()%2==1)
        answer+=s[c];
    else{
        answer+=s[c-1];
        answer+=s[c];
    
    }return answer;
}