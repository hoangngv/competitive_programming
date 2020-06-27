#include <bits/stdc++.h>

using namespace std;

int A, B, D, cnt=0;
bool check[4000001];

void isPrime()
{
    for (int i = 2; i <= B; i++) {
        check[i] = true;
    }
    for (int i = 2; i <= B; i++) {
        if (check[i] == true) {
            for (int j = 2 * i; j <= B; j += i) {
                check[j] = false;
            }
        }
    }
}

bool checkNum(int num)
{
    int digit;
    while(num>0)
    {
        digit = num%10;
        if(digit == D)
        {
            cnt++;
            return true;
        }
        num /= 10;
    }
    return false;
}

int main()
{
    cin >> A >> B >> D;
    isPrime();
    for(int i=A; i<=B; i++)
    {
        if(check[i])
        {
            checkNum(i);
        }
    }
    cout << cnt << endl;
    return 0;
}
