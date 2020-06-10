#include <bits/stdc++.h>

using namespace std;

int n, tree[10000], q, MAX=0, ans=0;

int main()
{
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> tree[i];
        if(tree[i]>MAX)
        {
            MAX=tree[i];
        }
    }
    cin >> q;
    for(int i=0; i<n; i++)
    {
        if(tree[i]<MAX)
        {
            ans+=(MAX-tree[i])*q;
        }
    }
    cout << ans << endl;
    return 0;
}
