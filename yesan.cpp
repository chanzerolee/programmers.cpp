#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    sort(d.begin(),d.end());
    for(int i:d){
         if(d[answer]<=budget){
                budget-=d[answer];
             answer++;
         }
        else{
            break;
        }
    }
    return answer;
}