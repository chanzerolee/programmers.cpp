//없는 숫자 더하기
#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> numbers){
  int answer = 45;
  for(int i=0;i<numbers.size();i++){
    answer-=numbers[i];
  }
    return answer;
}