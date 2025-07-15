/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl '\n'
#define vin(v) for(auto &e : v) {cin >> e;}

void solve() {
    
    int n; cin >> n;
    if (n % 8 == 0 || n % 8 == 4) {cout << "Bob" << nl;}
    else cout << "Alice" << nl;

}

int main() {

    fastio();
    int t; cin >> t;
    while (t--) {
        solve();
    }

}   