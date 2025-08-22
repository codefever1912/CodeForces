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
    int n, x; cin >> n >> x;
    vector<int>v(n);
    vin(v);
    int a, b;
    for(int i = 0; i < n; i++) {
        if(v[i] == 1) {a = i; break;}
    }
    for(int i = n - 1; i >= 0; i--) {
        if(v[i] == 1) {b = i; break;}
    }

    cout << ((abs(a-b) < x) ? "YES" : "NO") << nl;
}

int main(){
    fastio();
    int t; cin >> t;
    while(t--) {
        solve();
    }
}   