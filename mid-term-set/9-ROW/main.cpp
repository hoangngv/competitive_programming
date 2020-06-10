#include <iostream>

using namespace std;

int N, Q, rectArea[300001][6];

void init() {
    rectArea[0][1] = 0;
    rectArea[0][2] = 0;
    rectArea[0][3] = 0;
    rectArea[0][4] = 0;
    rectArea[0][5] = 0;
}

int main() {
    cin >> N;

    for (int i = 1; i <= N; i++) {
        int w, h, color;
        cin >> w >> h >> color;
        for (int j = 1; j <= 5; ++j) {
            if (j != color) {
                rectArea[i][j] = rectArea[i-1][j];
            } else {
                rectArea[i][j] = rectArea[i-1][j] + w*h;
            }

        }
    }
    cin >> Q;

    for (int i = 0; i < Q; i++) {
        int ii, jj, color;
        cin >> ii >> jj >> color;
        cout << rectArea[jj][color] - rectArea[ii][color] << endl;
    }
    return 0;
}
