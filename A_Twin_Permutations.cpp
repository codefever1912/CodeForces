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
    vector<int>a(n);
    for(auto &e : a) {
        cin >> e;
        cout << n - e + 1 << ' ';
    }

    cout << nl;
}

int main(){
    fastio();
    int t; cin >> t;
    while(t--) {
        solve();
    }
}   