#include <iostream>

using namespace std;

int countInNumberA[10], countInNumberB[10];

int main() {
    // input
    string A, B;
    cin >> A >> B;
    for (int i = 0; i < A.length(); i++) {
        countInNumberA[A[i]-48]++;
    }
    for (int i = 0; i < B.length(); i++) {
        countInNumberB[B[i]-48]++;
    }

    bool exist = false;

    // print result
    for (int i = 9; i >= 0; i--) {
        for (int j = 0; j < min(countInNumberA[i], countInNumberB[i]); j++) {
            exist = true;
            cout << i;
        }
    }

    if (!exist) {
        cout << "No solution";
    }

    return 0;
}
