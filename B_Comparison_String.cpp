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
    string s; cin >> s;
    // char curr = s[0];
    int ans = 2;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) ans++;
        // curr = s[i];
    }

    cout << ans << nl;
}

int main () {
    fastio();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}