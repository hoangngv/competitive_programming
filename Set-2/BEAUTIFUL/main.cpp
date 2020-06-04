#include <iostream>

using namespace std;

int n, k;

void input(){
    cin >> n >> k;
}

int pow(int base, int exp) {
    int res = 1;
    for (int i = 0; i < exp; i++){
        res *= base;
    }
    return res;
}

int getBaseNumber(){
    return pow(10, n-1);
}

// idea: divide n+k by k
void findBeautifulNumber(){
    cout << getBaseNumber() << endl;
    int baseNumber = getBaseNumber();
    int remainder = (baseNumber+k)%k;
    if (remainder == 0)
        cout << baseNumber;
    else
        cout << baseNumber+k-remainder;
}

int main(){
    input();
    findBeautifulNumber();
    return 0;
}
