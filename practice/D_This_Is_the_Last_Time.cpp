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
    ll n, k; cin >> n >> k;
    vector<pair<pair<ll, ll>, ll>>casino(n);
    for (int i = 0; i < n; i++) {
        cin >> casino[i].first.first >> casino[i].first.second >> casino[i].second;
    }
    sort(casino.begin(), casino.end());
    // for (auto &x : casino) {
    //     cout << x.first.first << ' ' << x.first.second << ' ' << x.second << nl;
    // }
    
    for (auto &x : casino) {
        if (k >= x.first.first && k <= x.first.second) {k = max(k, x.second);}
        // else if (k < x.first.first) break;
    }

    cout << k << nl;

}

int main () {
    fastio();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}