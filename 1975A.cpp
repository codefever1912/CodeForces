#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin >> n;
    int a[n];
    for(auto &e : a) {cin >> e;}
    int b[n];
    copy(a,a+n,b);
    sort(b,b+n);
    bool ans=true;
    for(int i=0;i<n;i++) {
        if(a[i]!=b[i]) {ans = false;break;}
    }
    if(ans || a[0] > a[n-1]) {cout << "Yes" << endl;}
    else cout << "No" << endl;
}

int main() {
    int t;cin >> t;
    while(t--) {
        solve();
    } 
}