#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k; cin >> n >> k;
    int a[n];
    bool ans{false};
    for(auto &e : a) {cin >> e; if(e==k) {ans=true;}}
    cout << ((ans)?"YES":"NO") << endl;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}