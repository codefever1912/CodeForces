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
    vector<int>b(n);
    vin(b);

    map<int, int>cnt;
    for (int x : b) {
        cnt[x]++;
    }

    for (auto & [key, val] : cnt) {
        if (key != 1 && (val % key) != 0) {
            cout << -1 << '\n';
            return;
        }
    }

    int distinct_elems = cnt[1];
}
int main () {
    fastio();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}