#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin >> n;
    int a[n];
    map<int,int>mp;
    int mx = 0;
    for(auto &e : a) {
        cin >> e;
        mp[e]++;
        mx = max(mx,e);
    }

    bool ans = false;
    for(auto x : mp) {
        if(x.second % 2){ans = true;}
    }

    if(ans) {cout << "YES" << endl;}
    else{cout << "NO" << endl;
}}

int main() {
    int t;cin >> t;
    while(t--) {
        solve();
    }
}