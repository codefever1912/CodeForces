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

    int first_diff = -1, last_diff = -1;
    int first_zero = -1, last_zero = -1;

    for (int i = 0; i < n; i++) {
        if (v[i] != 0 && v[i] != i + 1) {
            if (first_diff == -1) {
                first_diff = last_diff = i + 1;
            } else {
                last_diff = i + 1;
            }
        } else if (v[i] == 0) {
            if (last_zero == -1) {
                first_zero = last_zero = i + 1;
            } else {
                last_zero = i + 1;
            }
        }
    }

    ll total = (n * (n + 1)) / 2;
    if (first_diff == -1) {
        if (first_zero == -1) {
            cout << 0 << '\n';
            return;
        }

        if (first_zero == last_zero) {
            cout << 0 << '\n';
            return;
        }

        cout << last_zero - first_zero + 1 << '\n';
    } else if (first_diff == last_diff) {
        if (first_zero == -1) {
            cout << 1 << '\n';
            return;
        } else {
            cout << max(first_diff, last_zero) - min(first_diff, first_zero) + 1 << '\n';
        }
    } else {
        if (first_zero == -1) {
            cout << last_diff - first_diff + 1 << '\n';
        } else if (first_zero == last_zero) {
            if (total - accumulate(v.begin(), v.end(), 0) == first_zero) {
                cout << last_diff - first_diff + 1 << '\n';
            } else {
                cout << max(last_diff, last_zero) - min(first_diff, first_zero) + 1 << '\n';
            }
        } else {
            cout << max(last_diff, last_zero) - min(first_diff, first_zero) + 1 << '\n';
        }
    }
}

int main () {
    fastio();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}