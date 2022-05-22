//같은 숫자는 싫어
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int a=0;
    answer.push_back(arr[0]);
    for(int i=1;i<arr.size();i++){
        if(answer[a]!=arr[i]){
            answer.push_back(arr[i]); 
        a++;}
    }
    return answer;
}