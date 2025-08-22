/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n,q; cin >> n >> q;
    vector<ll>a(n+1);
    for(int i(0);i<n;i++) {cin >> a[i];}
    vector<ll>sum(n+1,0);
    for(int i{1};i<=n;i++) {
        sum[i] += a[i-1] + sum[i-1];
    }
    
    while(q--) {
        int l,r; cin >> l >> r;
        cout << sum[r] - sum[l-1] << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}