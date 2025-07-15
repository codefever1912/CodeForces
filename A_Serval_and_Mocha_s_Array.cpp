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

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (gcd(a[i], a[j]) <= 2) {
                cout << "Yes" << nl; return;
            }
        }
    }

    cout << "No" << nl;         
}

int main () {
    fastio();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}