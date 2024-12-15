#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin >> n;
    int a[n],b[n+1];
    for(auto &e : a) {cin >> e;}
    for(auto &e : b) {cin >> e;}
    int diff = INT_MAX;
    int index=0;
    for(int i=0; i<n; i++) {
        if(abs(a[i]-b[n]) < diff) {
            diff = abs(a[i]-b[i]);
            index = i;
        }
    }
    
    int ans = 1;
    for(int i = 0; i<n; i++) {
        ans += abs(a[i]-b[i]);
    }

    cout << ans << endl;
}

int main() {
    int t;cin >> t;
    while(t--) {
        solve();
    }
}