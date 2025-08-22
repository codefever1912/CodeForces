/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n,q; cin >> n >> q;
    vector<int>a(n);
    for(auto &e : a) {cin >> e;}
    vector<ll>prefixSum(n+1,0);
    for(int i{1};i<=n;i++) {
        prefixSum[i] = a[i-1] + prefixSum[i-1];
    }
    while(q--) {
        int l,r; cin >> l >> r;
        l--;r--;
        cout << prefixSum[r+1] - prefixSum[l] <<'\n';   
    }
    // l=2,r=4 => return ps[r]-ps
    // 1 2 3 4 5
    // 0 1 3 6 10 15
}

int main(){
    fastio();
    // int t; cin >> t;
    solve();
}