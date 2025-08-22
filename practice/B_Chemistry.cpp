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
    int n, k; cin >> n >> k;
    string s; cin >> s;
    map<int, int>mp;
    for(char c : s) {mp[c]++;}
    int cnt = 0;
    for (auto &x : mp) {cnt += (x.second % 2 == 1);}

    if (cnt > k + 1) cout << "NO" << nl;
    else cout << "YES" << nl;
}

int main () {
    fastio();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}