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
    string s; cin >> s;
    int cnt0 = 0, cnt1 = 0;
    for (char c : s) {
        cnt0 += (c == '0');
        cnt1 += (c == '1');
    }

    int moves = min(cnt0, cnt1);
    cout << ((moves % 2) ? "DA" : "NET") << nl;
}

int main () {
    fastio();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}