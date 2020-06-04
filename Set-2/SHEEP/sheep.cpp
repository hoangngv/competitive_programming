#include <iostream>

using namespace std;

int N, L, lost[10] = {0};

void input(){
    cin >> N >> L;
    for(int i = 0; i < L; i++)
    {
        int tmp;
        cin >> tmp;
        lost[tmp] = 1;
    }
}

bool check(int n)
{
    int mod;
    while(n > 0)
    {
        mod = n % 10;
        if(lost[mod] == 1)
        {
            return true;
        }
        n /= 10;
    }
    return false;
}

int main()
{
    input();
    int cnt = 0, i;
    for(i = 1; cnt < N; i++)
    {
        if(!check(i))
        {
            cnt++;
        }
    }
    cout << i-1 << endl;
    return 0;
}
