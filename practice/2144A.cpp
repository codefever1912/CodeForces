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
    vector<int>a(n);
    vin(a);

    if (accumulate(a.begin(), a.end(), 0) % 3 != 0) {
        cout << 0 << ' ' << 0 << '\n';
        return;
    }

    cout << 1 << ' ' << 2 << endl;
}

int main () {
    fastio();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}