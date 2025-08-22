#include <bits/stdc++.h>
using namespace std;

#define ll long long 
void solve() {
    ll n,k; cin >> n >> k;
    bool ans{false};
    for(ll i = n-k+1; i <= n; i++) {
        if(i % 2) {
            if(ans == true) {ans = false;}
            else ans = true;
        }
    }

    cout << ((ans) ? "NO" : "YES") << endl;

    // cout << ((ans%2)?"NO":"YES") << endl;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}