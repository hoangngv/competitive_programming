#include <iostream>

using namespace std;

int N, m, kid[100005], cnt[5005], MAX;

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> kid[i];

    for (int i = N-1; i >= 0; i--)
    {
        int candy = 0;
        for (int j = 1; j <= kid[i]; j++)
            candy += cnt[j];
        if (candy > 0)
            MAX = max(MAX, candy+kid[i]);

        cnt[kid[i]]++;
    }

    if (MAX == 0)
    {
        for (int i = 1; i <= N; i++)
                if (kid[i] != kid[i-1]) MAX++;
    }
    cout << MAX;
    return 0;
}
