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
    vector<int>a(n);
    for (auto &e : a) {cin >> e;}
    sort(a.begin(), a.end()); // a = {2,4,6,8}

    int cnt = 1, mx = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] - a[i-1] <= k) cnt++;
        else {
            mx = max(mx, cnt);
            cnt = 1;
        }
    }

    mx = max(mx, cnt);

    cout << n - mx << '\n';
}

int main () {
    fastio();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}