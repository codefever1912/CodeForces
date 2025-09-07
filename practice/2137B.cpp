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
    int n; cin >> n;
    vector<int>v(n);
    vin(v);
    
    vector<int>perm;
    if (n == 2) {
        for (int x : v) {
            if (x == 1) perm.push_back(2);
            else perm.push_back(1);
        }
    } else if (n == 3) {
        for (int x : v) {
            if (x == 1) perm.push_back(2);
            else if (x == 2) perm.push_back(1);
            else perm.push_back(3);
        }
    } else {
        int target = n + 1;
        for (int x : v) {
            perm.push_back(target - x);
        }
    }

    for (int x : perm) {
        cout << x << ' ';
    }

    cout << '\n';
}

int main () {
    fastio();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}