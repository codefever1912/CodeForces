/*
  Codeforces -> codefever1912
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl '\n'
#define vin(v) for(auto &e : v) {cin >> e;}

void solve() {
    int n; cin >> n;
    if (n == 1) {
        cout << 1 << ' ' << 1 << '\n';
        return;
    } else if (n == 2) {
        cout << 1 << ' ' << 2 << ' ' << 1 << ' ' << 2 << '\n';
        return;
    }

    vector<int>v(2 * n);

    v[0] = v[n-1] = 1;
    v[n] = v[2 * n - 1] = n - 1;
    v[n-2] = v[2 * n - 2] = n;
    for (int i = n - 3; i >= 1; i--) {
        v[i] = n - 1 - i;
    }

    for (int i = n + 1; i < 2 * n - 2; i++) {
        v[i] = i - n + 1;
    }

    for (int x : v) {
        cout << x << ' ';
    }

    cout << '\n';
}

int main () {
    fastio();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}