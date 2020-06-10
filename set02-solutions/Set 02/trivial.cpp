#include <bits/stdc++.h>

using namespace std;

int a, b, MIN_num=-1, MAX_num=-1;
float MIN=100000000, MAX=0;

int cal(int n)
{
    int sum=0;
    for(int i=1; i<=n/2; i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    return sum;
}

int main()
{
    cin >> a >> b;
    for(int i=a; i<=b; i++)
    {
        int tmp=cal(i);
        float trivial=(float)tmp/(float)i;
        if(trivial<MIN)
        {
            MIN=trivial;
            MIN_num=i;
        }
        if(trivial>MAX)
        {
            MAX=trivial;
            MAX_num=i;
        }
    }
    cout << MIN_num << " " << MAX_num;
    return 0;
}
