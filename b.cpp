/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl '\n'

void solve() {
    
    int n, m; cin >> n  >> m;
    vector<vector<int>>v(n, vector<int>(m));
    int mx = INT_MIN;
    for(vector<int>a : v) {
        for(auto &e : a) {
            cin >> e;
            mx = max(mx, e);
        }
    }

    vector<pair<int, int>>pos;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(v[i][j] == mx) {
                pos.push_back({i+1, j+1});
            }
        }
    }

    bool is_poss = true;
    int r = pos[0].first;
    int c = pos[0].second;
    for(int i = 1; i < pos.size(); i++) {
        if(pos[i].first != r || pos[i].second != c) {
            is_poss = false; break;
        }
    }

    if(is_poss) {cout << mx - 1 << nl;}
    else cout << mx << nl;

}

int main(){
    fastio();
    int t; cin >> t;
    while(t--) {
        solve();
    }
}