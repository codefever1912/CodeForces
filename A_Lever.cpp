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
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    int total_excess = 0;

    vin(a);
    vin(b);

    for (int i = 0; i < n; ++i) {
        if (a[i] > b[i]) {
            total_excess += a[i] - b[i];
        }
    }

    cout << total_excess + 1 << endl;
}

int main () {
    fastio();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}