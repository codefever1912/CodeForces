#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int>a(n);
    for(auto &e : a) {cin >> e;}
    int diff{INT_MAX};
    for(int i{0};i<n-1;i++) {
        diff = min(diff, a[i+1] - a[i]);
    }

    cout << ((diff<0)?0:(diff+2)/2) << endl;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }

}