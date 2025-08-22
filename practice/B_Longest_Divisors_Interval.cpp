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
    if (n % 2) {cout << 1 << nl; return;}
    /*
    n % 3 != 0
    7 -> 1
    8 -> 2
    10 -> 2
    14 -> 
    find smallest x that does not divide n -> ans is x - 1
    */
    for (int i = 1; i < n; i++) {
        if (n % i != 0) {cout << i << nl; return;}
    }
    
    
}

int main () {
    fastio();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}