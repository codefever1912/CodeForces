#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k; cin >> n >> k;
    int curr{0}, ans{0};
    vector<int>a(n);
    for(auto &e : a) {cin >> e;}
    for(int x : a) {
        if(x >= k) {
            curr += x;
        } else if(x == 0 ) {
            if(curr > 0) {ans++; curr -= 1;}
        } else {
            continue;
        }
    }

    cout << ans << endl;
}

int main() {
    int t;cin >> t;
    while(t--) {
        solve();
    }
}