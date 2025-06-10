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
    // if n is even -> subtract n/2 from both sides of l and r to get initial infected segment and then add m/2 on both sides 
    // to find [l`, r`]
    // if n is odd then subtract n/2 from one sides and n/2 + 1 from other side and similarly if m is odd as well
    
    int n,m,l,r; cin >> n >> m >> l >> r;
    
    // After n days, n+1 houses are infected, i.e. |l - r| = n;
    // So for m days, we need a segment of m + 1 houses -> return [l, l + m] or [r-m, r]
    
    cout << l << ' ' << l + m << nl;
}

int main(){
    fastio();
    int t; cin >> t;
    while(t--) {
        solve();
    }
}   