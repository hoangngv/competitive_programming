#include <bits/stdc++.h>

using namespace std;

int up[1000]={0}, down[1000]={0}, N, MIN=999, mem[100]={-1};

void subset(int pos)
{
    if(pos>=N)
    {
        int s_up=0, s_down=0;
        for(int i=0; i<N; i++)
        {
            if(mem[i]==0)
            {
                s_up+=up[i];
                s_down+=down[i];
            }
            else
            {
                s_up+=down[i];
                s_down+=up[i];
            }
        }
        if(abs(s_up-s_down)<MIN)
        {
            MIN=abs(s_up-s_down);
        }
    }
    else
    {
        for(int i=0; i<=1; i++)
        {
            mem[pos]=i;
            subset(pos+1);
        }
    }
}

int main()
{
    cin >> N;
    for(int i=0; i<N; i++)
    {
        cin >> up[i] >> down[i];
    }
    subset(0);
    cout << MIN << endl;
    return 0;
}
