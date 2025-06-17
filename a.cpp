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
    int n,q; cin >> n >> q;
    vector<int>v(n);
    map<int, int>mp;
    for(int i = 0; i < n; i++) {
        cin >> v[i]; mp[v[i]] = i;
    }

    // [0,a-1], [a,b], [b+1,c], [c+1, n-1]
    while(q--) {
        int a,b,c; cin >> a >> b >> c;
        for(auto &e : mp) {
            if(e.second < a) {
                e.second += b-a+1;
            } else if(e.second >= a && e.second <= b) {
                e.second -= a;
            } else if(e.second > b && e.second <= c) {
                e.second += n-1-c;
            } else if(e.second > c) {
                e.second -= c - b;
            }
        }
    }

    for(auto &e : mp) {
        v[e.second] = e.first;
    }

    for(int x : v) {cout << x << ' ';}
    cout << nl;

}

int main(){
    fastio();
    int t; cin >> t;
    while(t--) {
        solve();
    }
}   