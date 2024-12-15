#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;cin >> n;
    ll a[n];
    for(auto &e : a) {cin >> e;}

    ll currSum = a[0];
    ll ans; 
    for(int i{1};i<n;i++) {
        ans += (a[i]==currSum);
        currSum += a[i];
    }

    cout << ans << endl;
}

int main() {
    int t;cin >> t;
    while(t--) {
        solve();
    }
}