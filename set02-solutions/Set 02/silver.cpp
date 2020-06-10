#include <bits/stdc++.h>

using namespace std;

int n, score[1000000], gold=0, silver=0;

int main()
{
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> score[i];
        if(score[i]>gold)
        {
            silver=gold;
            gold=score[i];
        }
        if(score[i]<gold && score[i]>silver)
        {
            silver=score[i];
        }
    }
    cout << silver << endl;
    return 0;
}
