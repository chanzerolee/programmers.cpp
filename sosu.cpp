//LV_1 소수찾기
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    bool arr[n];
    for(int i=0;i<=n;i++){
            arr[i]=false;
    }
    for(int i=0;i<=n;i++){
        if(arr[i])
            continue;
        else if(i==0||i==1){
            arr[i]=true;
            continue;
        }
        for(int j=2;j<=n;j++){
            if(i*j>n)
                break;
            arr[i*j]=true;
        }
    }
    for(int i=0;i<=n;i++){
        if(!arr[i])
            answer++;
    }
    return answer;
}