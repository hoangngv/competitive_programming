#include <bits/stdc++.h>

using namespace std;

int n, t, f, x;

int main()
{
    cin >> n >> t >> f >> x;
    t-=1;
    n-=f;
    int needed_time=n*x;
    int remain_time=t*60;
    if(needed_time==remain_time)
    {
        cout << "EXACT!" << endl;
    }
    else if(needed_time<remain_time)
    {
        cout << "YES" << endl;
        cout << remain_time-needed_time << endl;
    }
    else if(needed_time>remain_time)
    {
        cout << "NO" << endl;
        cout << needed_time-remain_time << endl;
        cout << n-(remain_time/x) << endl;
    }
    return 0;
}
