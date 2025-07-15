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
    int a[n];
    vin(a);

    if (a[0] == a[n-1]) {cout << "NO" << nl; return;}
    cout << "YES" << nl;
    sort(a,a+n);
    cout << a[n-1] << ' ';
    for (int i = 0; i < n - 1; i++) {
        cout << a[i] << ' ';
    }
    
    cout << nl;

    // 3 3 6 6
    // 6 3 3 6
    // 6 6  3 3
}

int main () {
    fastio();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}