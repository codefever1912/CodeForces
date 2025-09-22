/*
  Codeforces -> codefever1912
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl '\n'
#define vin(v) for (auto &e : v) {cin >> e;}

void solve() {
    int n, k; cin >> n >> k;
    vector<int>v(n);
    vin(v);

    int mx = *max_element(v.begin(), v.end());
    vector<int> larger;
    for (int x : v) {
        if (x >= v[k - 1]) {
          larger.push_back(x);
        }
    }

    sort(larger.begin(), larger.end());
    int water = 0;
    for (int i = 0; i < larger.size() - 1; i++) {
        int diff = larger[i + 1] - larger[i];
        if (diff > (larger[i] - water)) {
            cout << "NO" << nl;
            return;
        }
        water += diff;
    }

    cout << "YES" << nl;
}

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
