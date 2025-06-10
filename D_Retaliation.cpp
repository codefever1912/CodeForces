/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl '\n'
#define vin(v) for(auto &e : v) {cin >> e;}

bool solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    int i1 = 1, j1 = n;
    int i2 = 2, j2 = n - 1;

    int den = j2 - 2 * j1;
    int num = a[1] - 2 * a[0];

    if (den == 0) {
        if (num != 0) return false;
        int x = a[0], y = 0;
        for (int i = 0; i < n; ++i) {
            int idx = i + 1;
            if (x * idx + y * (n - idx + 1) != a[i]) return false;
        }
        return true;
    }

    if (num % den != 0) return false;
    int y = num / den;
    int x = a[0] - y * j1;

    if (x < 0 || y < 0) return false;

    for (int i = 0; i < n; ++i) {
        int idx = i + 1;
        if (x * idx + y * (n - idx + 1) != a[i]) return false;
    }

    return true;
}

int main() {
    fastio();

    int t;
    cin >> t;
    while (t--) {
        cout << (solve() ? "YES" : "NO") << '\n';
    }
}