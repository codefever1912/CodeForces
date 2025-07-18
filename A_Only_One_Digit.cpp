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
    int x; cin >> x;
    string s = to_string(x);
    int mn = INT_MAX;
    for (char c : s) {
        mn = min(mn, c - '0');
    }

    cout << mn << nl;
}

int main () {
    fastio();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}