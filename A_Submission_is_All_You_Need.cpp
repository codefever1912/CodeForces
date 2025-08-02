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
    /*
    mex -> 0 - 1, else sum(t)
    */
    int n; cin >> n;
    vector<int>v(n);
    vin(v);

    int zero_cnt = count(v.begin(), v.end(), 0);
    int sum = accumulate(v.begin(), v.end(), 0);

    cout << sum + zero_cnt << nl;
}

int main () {
    fastio();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}