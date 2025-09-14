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
    vector<int>fields(n);
    vector<int>odds;
    ll total = 0;
    for (auto &e : fields) {
        cin >> e;
        if (e % 2) {
            odds.push_back(e);
        } else {
            total += e;
        }
    }

    if (odds.empty()) {
        cout << 0 << '\n';
        return;
    }

    sort(odds.begin(), odds.end(), greater<int>());
    for (int i = 0; i < odds.size() - i; i++) {
        total += odds[i];
    }

    cout << total << '\n';
}

int main () {
    fastio();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}