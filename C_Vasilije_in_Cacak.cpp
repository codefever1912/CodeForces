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
    /*
    5 3 3
    k == x
    k disntinct for sum to be k -> possible as all have to be 1
    
    */

    ll n, k, x; cin >> n >> k >> x;
    ll lower = k * (k + 1) / 2;
    ll upper = k * (2 * n - k + 1) / 2;

    if (x >= lower && x <= upper) cout << "YES" << nl;
    else cout << "NO" << nl;
}

int main () {
    fastio();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}