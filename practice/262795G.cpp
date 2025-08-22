/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl '\n'

    void solve() {
    int n,m,q; cin >> n >> m >> q;
    vector<vector<ll>>prefix(n+1, vector<ll>(m+1,0));
    for(int i{1};i<=n;i++) {
        for(int j{1};j<=m;j++) {
            ll x; cin >> x;
            prefix[i][j] = x + prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1];
        }
    }

    while(q--) {
        int x1,y1,x2,y2; cin >> x1 >> y1 >> x2 >> y2;
        cout << prefix[x2][y2] - prefix[x2][y1-1] - prefix[x1-1][y2] + prefix[x1-1][y1-1] << nl;
    }
}

int main(){
    fastio();

    solve();
}   