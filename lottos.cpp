#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int count=0;
    int zero=0;
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            if(lottos[i]==win_nums[j]){
              count++;}
            }
    }
    for(int i=0;i<6;i++){
        if(lottos[i]==0)
            zero++;
    }
    if(count==0){
        count++;
        if(zero==6)
        zero--;
    }
    answer.push_back(7-(count+zero));
    answer.push_back(7-count);
    return answer;
}