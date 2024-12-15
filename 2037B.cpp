#include <iostream>
#include <vector>
#include <map>
using namespace std;

void solve() {
    int k; cin >> k;
    vector<int>a(k);
    map<int,int>mp;
    for(auto &e : a) {cin >> e;mp[e]++;}
    for(int x : a) {
        if((k-2)%x==0){
            int rem = (k-2)/x;
            if(rem == x && mp[x] >= 2) {cout << rem << ' ' << rem << endl; return;}
            if(mp[rem] && rem != x) {
                cout << rem << " " << x << endl;
                return;
            }
        }
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}