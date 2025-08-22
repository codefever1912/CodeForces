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
    // if(n == 1 && m == 1) {
    //     int x; cin >> x;
    //     cout << x - 1 << nl;
    //     return;
    // }

    vector<vector<int>>v(n, vector<int>(m));
    int mx = INT_MIN;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> v[i][j];
            mx = max(mx, v[i][j]);
        }
    }

    if(n == 1 && m == 1 || n == 2 && m == 2) {
        cout << mx - 1 << nl; return;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
           cnt += (v[i][j] == mx);
        }
    }

    // vector<pair<int, int>>pos;
    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < m; j++) {
    //         if(v[i][j] == mx) {
    //             pos.push_back({i, j});
    //         }
    //     }
    // }

    // bool is_poss = true;
    // int r = pos[0].first;
    // int c = pos[0].second;
    // for(int i = 1; i < pos.size(); i++) {
        
    // }

    // unordered_set<int>set_r, set_c;
    vector<int>r(n,0);
    vector<int>c(m,0);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(v[i][j] == mx) {
                r[i]++; c[j]++;
            }
        }
    }


    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(v[i][j] == mx ) {
                // if(set_r.find(i) == set_r.end() && set_c.find(j) == set_c.end()) {
                //     cout << mx << nl; return;
                // }
                if((r[i] > 1 && c[i]==1) || (r[i == 1 && c[i] > 1] || (r[i]==1 && c[i]==1))) {
                    cout << mx << nl; return;
                }
            }
        }
    }

    // set_r = {0    1 2}
    // set_c = {0 1 2}

    cout << mx - 1 << nl;

}

int main(){
    fastio();
    int t; cin >> t;
    while(t--) {
        solve();
    }
}