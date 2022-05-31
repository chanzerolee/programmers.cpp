//LV_1 최대공약수와 최소공배수
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int count;
    for(int i=1;i<=m;i++)
        if(n%i==0&&m%i==0)
            count=i;
    answer.push_back(count);
    for(int i=2;i<=m*n;i++){
        if(i%m==0&&i%n==0){
            count=i;
            break;
        }
    }  
    answer.push_back(count);
    return answer;
}