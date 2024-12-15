#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;cin >> n >> m;
    char a[n];
    for(auto &e : a) {cin >> e;}
    int b[7] = {0};
    for(char c : a) {
        b[c-'A']++;
    }
    int ans = 0;
    for(int x : b) {
        if(x < m) {ans += m-x;}
    }

    cout << ans << endl;
}

int main() {
    int t;cin >> t;
    while(t--) {
        solve();
    }
}