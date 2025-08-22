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
    2 1-pref 2-suff
    
    3 1 3
    3 2 1

    3 1 1
    
    4 2 2
    1 2 3 4
    1 2 

    3 2 2 
    1 2
    1 2
    */

    int n, a, b; cin >> n >> a >>b;
    if (n - a - b >= 2 || a == n && b == n) cout << "Yes" << nl;
    else cout << "No" << nl;
}

int main () {
    fastio();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}