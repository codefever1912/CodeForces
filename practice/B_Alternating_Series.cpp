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
    if (n == 2) {
        cout << -1 << ' ' << 2 << nl;
        return;
    } else {
        for (int i = 1; i <= n; i++) {
            if (i % 2) cout << -1 << ' ';
            else {
                if (i == n) cout << 2 << ' ';
                else cout << 3 << ' ';
            }
        }
    }    

    cout << nl;
}

int main () {
    fastio();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}