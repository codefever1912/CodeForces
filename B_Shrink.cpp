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
    vector<int>ans(n);
    int curr = 1;
    int idx = 0;
    while(curr <= n) {
        if(curr%2) {ans[idx++] = curr++;}
        else ans[n-idx] = curr++;
    }

    for(int x : ans) {
        cout << x << ' ';
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