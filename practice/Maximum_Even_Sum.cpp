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
    ll a, b; cin >> a >> b;
    if (b == 1) {
        if (a % 2) {
            cout << a + b << "\n";
        } else cout << -1 << "\n";

        return;
    }

    if (a % 2 == 0 && b % 2 == 1) {
        cout << -1 << '\n';
        return;
    }

    if (a % 2 == 1 && b % 2 == 1) {
        ll mx = max(a + b, a * b + 1);
        if (mx % 2 == 0) cout << mx << '\n';
        else cout << -1 << '\n';

        return;
    }

    ll mx = -1;
    for (ll i = 1; i * i <= b; i++) {
        if (b % i == 0) {
            ll tmp_a = a * i;
            ll tmp_b = b / i;
            if ((tmp_a + tmp_b) % 2 == 0) {
                mx = max(mx, tmp_a + tmp_b);
            }

            tmp_a = a * (b / i);
            tmp_b = i; // tmp_b = b / (b / i) -> i
            
            if ((tmp_a + tmp_b) % 2 == 0) {
                mx = max(mx, tmp_a + tmp_b);
            }
        }
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