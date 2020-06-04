#include <iostream>

using namespace std;

int n, t, f, x;
int neededTime, remainingTime;

void input(){
    cin >> n >> t >> f >> x;
}

void init(){
    t -= 1;
    n -= f;
    neededTime = n*x;
    remainingTime = t*60;
}

void reviewStrategy(){
    if(neededTime == remainingTime)
    {
        cout << "EXACT!" << endl;
    }
    else if(neededTime < remainingTime)
    {
        cout << "YES" << endl;
        cout << remainingTime - neededTime << endl;
    }
    else if(neededTime > remainingTime)
    {
        cout << "NO" << endl;
        cout << neededTime - remainingTime << endl;
        cout << n - (remainingTime/x) << endl;
    }
}

int main()
{
    input();
    init();
    reviewStrategy();
    return 0;
}
