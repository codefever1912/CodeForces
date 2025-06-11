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
    int mx = INT_MIN, curr=0;
    while(n--) {
        int x; cin >> x;
        curr += (x == 0);
        if(x == 1) {mx = max(mx, curr); curr = 0;}
    }

    mx = max(mx, curr);
    cout << mx << nl;
}

int main() {
    fastio();
    int t; cin >> t;
    while(t--) {
        solve();
    }
}   