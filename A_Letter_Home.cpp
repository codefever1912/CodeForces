/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl '\n'

void solve() {
    int n, x; cin >> n >> x;
    vector<int>v(n);
    for(auto &e : v) {cin >> e;}
    bool a = false;
    for(int i : v) {
        if(i == x) {a = true; break;}
    }

    int mn = INT_MAX;
    if(abs(v[0] - x) < abs(v[n-1] - x)) {mn = v[0];}
    else mn = v[n-1];

    cout << abs(mn - x) + v[n-1] - v[0] << nl;
}   

int main(){
    fastio();
    int t; cin >> t;
    while(t--) {
        solve();
    }
}