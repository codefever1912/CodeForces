/*
  Codeforces -> codefever1912
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    int zero_count = 0;
    for (char c : s) {
        if (c == '0') {
            zero_count++;
        }
    }

    int cnt = 0;
    for (int i = 0; i < zero_count; ++i) {
        if (s[i] == '1') {
            cnt++;
        }
    }
    cout << cnt << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        solve();
    }
}