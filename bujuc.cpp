using namespace std;

long long solution(int price, int money, int count)
{
    long long m=money;
    for(int i=1;i<=count;i++){
        m-=price*i;
    }
    if(m>=0)
        return 0;
    else
        return m*-1;
    }