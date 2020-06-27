#include <bits/stdc++.h>

using namespace std;

int C, N, coins[15];

int exchangeCoin()
{
    int table[C+1];
    table[0] = 0;
    for (int i=1; i<=C; i++)
        table[i] = INT_MAX;
    for (int i=1; i<=C; i++)
    {
        for (int j=0; j<N; j++)
          if (coins[j] <= i)
          {
              int subRes = table[i-coins[j]];
              if (subRes != INT_MAX && subRes+1 < table[i])
                  table[i] = subRes+1;
          }
    }
    return table[C];
}

int main()
{
    cin >> C >> N;
    for(int i=0; i<N; i++)
    {
        cin >> coins[i];
    }
    cout << exchangeCoin() << endl;
    return 0;
}
