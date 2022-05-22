//3진법 뒤집기
#include <string>
#include <vector>
#include <cmath>
using namespace std;
int solution(int n) {
    int answer=0;
    string num;
    while(n>0){
        num+=n%3;
        n/=3;
    }
    for(int i=0;i<num.size();i++){
        answer+=(num[num.size()-1-i])*pow(3,i);}
    return answer;
}