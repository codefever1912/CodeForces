/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() {ios_base::sync_with_stdio(false); cin.tie(NULL);}
#define nl '\n'
#define vin(v) for(auto &e : v) {cin >> e;}

void solve() {
    int n; cin >> n;
    vector<int>pref(n+1);
    pref[0] = 0;
    for(int i = 1; i <= n; i++) {
        int x; cin >> x;
        pref[i] = pref[i-1] + (x==2);
    }

    for(int i = 1; i <= n; i++) {
        if(pref[i] == pref[n] - pref[i]) {cout << i << nl; return;}
    }

    cout << -1 << nl;
}

int main(){
    fastio();
    int t; cin >> t;
    while(t--) {
        solve();
    }
}   