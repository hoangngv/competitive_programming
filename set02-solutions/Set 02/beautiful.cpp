#include <bits/stdc++.h>

using namespace std;

int n, k;

int main()
{
    cin >> n >> k;
    int low = pow(10, n-1);
    int high = pow(10, n);
    int mod = low%k;
    if(mod==0)
    {
        cout << low << endl;
    }
    else if(low+(k-mod)<high)
    {
        cout << low+(k-mod) << endl;
    }
    return 0;
}
