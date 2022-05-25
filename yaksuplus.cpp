//LV1 약수의 개수와 덧셈
#include <string>
#include <vector>
 
using namespace std;
 
int solution(int left, int right) {
    int answer = 0;
    for(int i=left;i<=right;i++){
        int nanum = 0;
        for(int j=1;j<=i;j++){
            if(i%j==0)
                nanum++;
        }
        if(nanum%2==0)
            answer+=i;
        else
            answer-=i;
    }
    return answer;
}