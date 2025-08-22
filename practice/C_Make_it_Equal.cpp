/*
  Codeforces -> codefever1912
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl '\n'
#define vin(v) for(auto &e : v) {cin >> e;}

void solve() {
    int n, k; cin >> n >> k;
    vector<int>s(n), t(n);
    vin(s);
    vin(t);

    map<int, int>s_map, t_map;
    for (int x : s) {
        s_map[x % k]++;
    }
    
    for (int x : t) {
        t_map[x % k]++;
    }
    
    for (auto &x : s_map) {
        if (x.first == 0) {
            if (x.second != t_map[0]) {
                cout << "NO" << nl;
                return;
            }
        }

        if (x.second != t_map[x.first]) {
            cout << "NO" << nl;
            return;
        }
    }

    cout << "YES" << nl;
}

int main () {
    fastio();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}