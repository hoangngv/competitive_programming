#include <bits/stdc++.h>

using namespace std;

unsigned long long N, M;

int main()
{
    cin >> N >> M;
    N-=1;
    unsigned long long cnt=0;
    if(N<M)
        cnt=N*2;
    else
        cnt=M+M-1;
    cout << cnt << endl;
    return 0;
}
