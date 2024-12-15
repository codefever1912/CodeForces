#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,x;cin >> n >> x;
    int a[n];
    for(auto &e : a) {cin >> e;}
    int mx{a[0]};
    for(int i{0}; i < n-1; i++) {
        mx = max(mx, a[i+1]-a[i]);
    }

    mx = max(mx, 2*(x-a[n-1]));

    cout << mx << endl;
}

int main() {
    int t;cin >> t;
    while(t--) {
        solve();
    }
}