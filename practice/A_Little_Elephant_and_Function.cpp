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

    // func calls: f(n) -> f(n-1) -> f(n-2) ... -> f(1) -> exit
    // n = 7
    // 7 1 2 3 4 5 6
    // 1 2 3
    // 1 2 3 4 5

    cout << n << ' ';

    for (int i = 1; i < n; i++) {
        cout << i << ' ';
    }
}

int main () {
    fastio();
    solve();

    return 0;
}