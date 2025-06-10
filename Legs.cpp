#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin >> n;
    if(n < 4) {cout << 1 << endl;return;}
    int ans;
    if(n%4==0) {ans = n/4;}
    if((n+2)%4==0) {ans = (n-2)/4 + 1;}

    cout << ans << endl;
}

int main() {
    int t;cin >> t;
    while(t--) {
        solve();
    }
}