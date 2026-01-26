// 01/26/2026
// Problem Name: A. Era
// https://codeforces.com/problemset/problem/1604/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long pos = 0, ans = 0;

        for (int i = 0; i < n; i++) {
            long long x = a[i];
            if (x > pos + 1) {
                long long need = x - (pos + 1);
                ans += need;
                pos += need;
            }
            pos++;
        }

        cout << ans << "\n";
    }

    return 0;
}
