#include <iostream>

using namespace std;

long long n;

long long check(long long mid) {
    long long mid_l = mid, sum;
    sum = mid_l*(mid_l+1) - mid;
    long long k = mid*2-1;
    //if (mid == 2) {cout<<k;}
    long long remain = n - sum;
    if (remain < 0) return -1;
    return k;
}

int main() {
    cin >> n;
    long long l = 1, r = n;
    long long final_mid = 0;
    while (l <= r) {
        long long mid = l + (r-l)/2;
        //cout<<l<<r<<endl;
        long long k = check(mid);
        if (k != -1) {
            final_mid = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    long long sum = final_mid*(final_mid + 1) - final_mid;
    long long res = 2*final_mid-1;
    long long remain = n - sum;

    while (remain > 0) {
        res++;
        remain -= final_mid;
    }
    cout << res;
    return 0;
}
