#include <iostream>

using namespace std;

int n;

void calculateRoom(int n){
    if(n%3 == 0){
        cout << 0 << " " << n/3;
    } else if(n%3 == 1){
        cout << 2 << " " << (n-4)/3; // n = 3k+1 (n-1 chia het 3k => n-1-3 = n-4 chia het 3k)
    } else {
        cout << 1 << " " << (n-2)/3; // n = 3k+2 (n-2 chia het 3k)
    }
}
int main(){
    cin >> n;
    calculateRoom(n);
    return 0;
}

