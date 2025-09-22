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
    map<int, int>mp;
    for (auto &e : v) {
        cin >> e;
        mp[e]++;
    }

    // for (auto &x : mp) {
    //     cout << x.first << ' ' << x.second << '\n';
    // }

    vector<pair<int, int>>cnt;
    for (auto &x : mp) {
        cnt.push_back({x.first, x.second});
    }

    // for (auto &x : cnt) {
    //     cout << x.first << ' ' << x.second << '\n';
    // }

    sort(cnt.begin(), cnt.end(), [] (pair<int, int>a, pair<int, int>b) {
        if (a.second == b.second) {
            return a.first < b.first;
        }

        return a.second < b.second;
    });

    // for (auto &x : cnt) {
    //     cout << x.first << ' ' << x.second << '\n';
    // }

    int sz = cnt.size();
    int mx = -1;
    for (int i = 0; i < sz; i++) {
        mx = max(mx, (sz - i) * cnt[i].second);
    }

    cout << mx << '\n';
}

int main () {
    fastio();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}