#include <bits/stdc++.h>

using namespace std;

int n, table[100]={0}, cnt=0;
bool used[100]={false};

bool check(int col, int row)
{
    for(int c_i=0; c_i<col; c_i++)
    {
        if(abs(col-c_i)==abs(table[c_i]-row))
        {
            return false;
        }
        if(abs(table[c_i]+c_i)==abs(col+row))
        {
            return false;
        }
    }
    return true;
}

void queen(int col)
{
    if(col==n)
    {
        cnt++;
        for(int i=0; i<n; i++)
        {
            cout << table[i] << " ";
        }
        cout << endl;
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            if(used[i]==false && check(col, i))
            {
                table[col]=i;
                used[i]=true;
                queen(col+1);
                used[i]=false;
            }
        }
    }
}

int main()
{
    cin >> n;
    queen(0);
    cout << cnt << endl;
    return 0;
}
