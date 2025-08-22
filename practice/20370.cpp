#include <iostream>
#include <vector>
#include <map>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int>a(n);
    map<int,int>mp;
    for(auto &e : a) {cin >> e;mp[e]++;} 
    int ans{0};
    for(auto e : mp) {ans += e.second/2;}

    cout << ans << endl;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}