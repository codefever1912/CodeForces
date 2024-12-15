#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k,x; cin >> n >> k >> x;
    if(x!=1 && k!=1) {
        cout << "YES" << endl;
        cout << n << endl;
        for(int i{0};i<n;i++) {cout << 1 << endl;}
        return;
    }

    if(n <= k && x!=n) {
        cout << "YES" << endl;
        cout << 1 << "\n" << n << endl;
        return;
    }

    

}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }

}