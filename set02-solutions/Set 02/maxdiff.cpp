#include <bits/stdc++.h>

using namespace std;

int n, MAX=0;
char arr[100000];

void iter()
{

    for(int s=0; s<n-1; s++)
    {
        int cnt=1;
        for(int e=s+1; e<n; e++)
        {
            if(arr[e]==arr[s])
            {
                cnt++;
                if(cnt>MAX)
                {
                    MAX=cnt;
                }
            }
            else
            {
                cnt--;
            }
        }
    }
}

int main()
{
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    iter();
    cout << MAX << endl;
    return 0;
}
