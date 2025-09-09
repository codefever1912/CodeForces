#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x; cin >> x;
    long long ans = -1;
    for (int y = 1; y < 1e9 - 1; y++) {
        long long new_number = stoll(to_string(x) + to_string(y));
        long long denominator = x + y;
        if (new_number % denominator == 0) {
            ans = y;
            break;
        }
    }

    cout << ans << '\n';
}

int main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}