#include <iostream>

using namespace std;

long long A, B, C, D, K;

int main() {
    cin >> A >> B >> C >> D >> K;

    if (A*B-C == A) {
        cout << A;
    }

    if (A*B-C > A) {
        while (A < D && K!= 0) {
            A = A*B-C;
            K = K - 1;
        }
        if (A >= D) {
            cout << D;
        } else {
            cout << A;
        }
    }

    if (A*B-C < A) {
        while (A > 0 && K != 0) {
            A = A*B-C;
            K = K - 1;
        }
        if (A > 0) {
            cout << A;
        } else {
            cout << 0;
        }
    }

    return 0;
}
