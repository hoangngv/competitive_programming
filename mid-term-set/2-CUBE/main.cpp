#include <iostream>

using namespace std;

int F[7];

int main() {
    int A,B,C;
    cin >> A >> B >> C;
    int countOne = 0;
    if (A == 1) ++countOne;
    if (B == 1) ++countOne;
    if (C == 1) ++countOne;
    for (int i = 0; i < 7; ++i) {
        F[i] = 0;
    }
    if (countOne == 0) {
        F[3] = 8;
        F[2] = (A+B+C-6)*4;
        //cout << (A*B*2+max(0,C-2)*(A+B)*2);
        F[1] = (A*B*2 + max(0, C-2)*A*2 + 2*max(0, C-2)*max(0, B-2)) - F[3] - F[2];
        F[0] = (A*B*C) - F[3] - F[2] - F[1];
    }
    if (countOne == 1) {
        F[4] = 4;
        F[3] = (A+B+C-5)*2;
        F[2] = (A*B*C) - F[3] - F[4];
    }
    if (countOne == 2) {
        F[5] = 2;
        F[4] = (A+B+C-4);
        //F[2] = (A*B*C) - F[3] - F[4];
    }
    if (countOne == 3) {
        F[6] = 1;
        //F[2] = (A*B*C) - F[3] - F[4];
    }
    for (int i=0;i<7;++i) {
        cout<<F[i]<<' ';
    }
    return 0;
}
