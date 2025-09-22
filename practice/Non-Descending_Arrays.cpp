/*
  Codeforces -> codefever1912
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl '\n'
#define vin(v) for(auto &e : v) {cin >> e;}
#define MOD 998244353

bool isGood(vector<int>a, vector<int>b, int i, int j) {
    for (int k = i; k <= j; k++) {
        swap(a[k], b[k]);
    }

    int n = a.size();
    cout << "array A" << '\n';
    for (int k = 0; k < n; k++) {
        cout << a[k] << ' ';
    }

    cout << '\n' << "Array B" << '\n';
    for (int k = 0; k < n; k++) {
        cout << b[k] << ' ';
    }

    cout << '\n' << '\n';

    for (int k = 1; k < n; k++) {
        if (a[k] < a[k - 1] || b[k] < b[k - 1]) return false;
    }

    return true;
}

void solve() {
    int n; cin >> n;
    vector<int>a(n), b(n);
    vin(a);
    vin(b);

    ll cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (isGood(a,b,i,j)){
                cnt = (cnt + 1) % MOD;
                cout << "Count: " << cnt << '\n';
            }
        }
    }

    cnt = cnt % MOD;

    cout << cnt << '\n';
}

int main () {
    fastio();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}