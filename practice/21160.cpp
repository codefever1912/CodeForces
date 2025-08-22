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
    // G -> a, c -> start
    // F -> b, d
    // 1 2 3 4
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int gelly = min(a, c);
    int flower = min(b, d);

    if(gelly >= flower) {cout << "Gellyfish" << nl;}
    else cout << "Flower" << nl;
}

int main(){
    fastio();
    int t; cin >> t;
    while(t--) {
        solve();
    }
}   