#include <bits/stdc++.h>

using namespace std;

int N, A[101], B[101], examined[101], res = 0;

void bookStack(int i, int pre, int cnt) {
    res = max(res, cnt);
    if (i == N) {
        return;
    }
    for (int j=0; j<N; ++j) {
        if (examined[j]) {
            continue;
        }
        if (pre == -1 || (A[j] < A[pre] && B[j] < B[pre])) {
            examined[j] = true;
            bookStack(i+1, j, cnt+1);
            examined[j] = false;
        }
    }
}

void init(){
    memset(examined, false, sizeof(examined));
}

int main() {
    init();
    cin >> N;
    for (int i=0;i<N;++i) {
        cin >> A[i] >> B[i];
    }
    bookStack(0, -1, 0);
    cout << res;
    return 0;
}
