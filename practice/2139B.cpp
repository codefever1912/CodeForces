/*
Codeforces -> codefever1912
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    vector<int>v(n);
    for (auto &e : v) {cin >> e;}

    sort(v.begin(), v.end());

    long long total_cakes = 0;
    for (int i = n - 1; i >= 0; i--) {
        total_cakes += v[i] * m;
        m--;
    }

    cout << total_cakes << "\n";
}

int main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}