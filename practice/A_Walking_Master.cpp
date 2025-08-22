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
    int a,b,c,d; cin >> a >> b >> c >> d;
    if(b > d) {cout << -1 << nl; return;}
    a = a + d - b;
    if(c > a) {cout << -1 << nl; return;}
    cout << d - b + a - c << nl;
}

int main(){
    fastio();
    int t; cin >> t;
    while(t--) {
        solve();
    }
}   