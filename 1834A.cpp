#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int>a(n);
    int ans{0},prod{1},sum{0};
    for(auto &e : a) {cin >> e;sum+=e;prod*=e;}
    while(sum<0) {
        sum += 2;
        prod*=-1;
        ans++;
    }
    if(prod==-1) {ans++;}
    cout << ans << endl;
}
    // if(sum>0 && prod>0) {cout << 0 << endl; return;}
    // if(sum>0 && prod<0) {
    //     cout << 1 << endl; return;
    // }
    // if(sum<0 && prod>0) {
    //     cout << ((neg-pos)+1)/2 << endl; return;
    // }
    // if(sum<0 && prod<0) {
    // }

    //prod<0 def means that neg>pos

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}