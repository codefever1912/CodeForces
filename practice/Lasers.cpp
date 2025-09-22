#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    vector<int>a(n), b(m);
    for (auto &e : a) {cin >> e;}
    for (auto &e : b) {cin >> e;}
     
    cout << n + m << endl;

}

int main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}