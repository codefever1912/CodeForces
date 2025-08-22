/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n,m; cin >> n >> m;
    map<int, int>mp;
    int x;
    while(cin >> x) {mp[x]++;}
    // for(int i{0};i<n;i++) {int x; cin >> x; mp[x]++;}
    // 1 < n < 2*m
    for(int i{-m};i<=m;i++) {
        if(mp.find(i)==mp.end()) {
            cout << i << endl; return;
        }
    }   
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}