#include <iostream>

using namespace std;

int n, A, B, C, D, E;

int findGCD(int x, int y) {
    while (x != 0 && y != 0) {
        if (x >= y) {
            x -=y;
        } else {
            y -=x;
        }
    }
    return x+y;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A >> B >> C >> D >> E;
        int comp = findGCD(findGCD(findGCD(findGCD(A, B), C), D), E);
        cout << 100/comp << endl;
    }
    return 0;
}
