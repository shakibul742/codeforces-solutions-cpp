// 2026-02-11
// Problem name: A. Friendly Numbers
// https://codeforces.com/contest/2197/problem/A

#include <bits/stdc++.h>
using namespace std;

int digit_sum(long long n) {
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        long long x;
        cin >> x;

        int ans = 0;

        for(long long y = x + 1; y <= x + 90; y++) {
            if(y - digit_sum(y) == x) {
                ans++;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}