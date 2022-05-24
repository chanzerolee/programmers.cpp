//LV1 2016녀ㄴ
#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    int sum=b;
    string day[]={"THU","FRI","SAT","SUN","MON","TUE","WED"};
    int month[]={31,29,31,30,31,30,31,31,30,31,30,31};
    for(int i=0;i<a-1;i++){ 
        sum+=month[i];
        }
    string answer = day[sum%7];
    return answer;
}