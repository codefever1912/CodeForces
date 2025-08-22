#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;
    vector<ll>a(n);
    map<int,int>mp;
    for(auto &e : a) {cin >> e; mp[e]++;}
    if(mp.size() < 2) {cout << -1 << endl; return;}
    sort(a.begin(),a.end());
    vector<int>b,c;
    int mx = a[n-1];
    for(int i{0};i<mp[mx];i++) {
        c.push_back(mx);
    }
    for(int i{0};i<n-1;i++) {
        if(a[i] != mx){
            b.push_back(a[i]);
        }
    }

    cout << b.size() << " " << c.size() << endl;
    for(int x : b) {cout << x << " ";}
    cout << endl;
    for(int x : c ) {cout << x << " ";}
    cout << endl;
}

int main() {
    int t=1;
    cin >> t;
    while(t--) {
        solve();
    }
}