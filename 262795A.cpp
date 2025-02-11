/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n,q; cin >> n >> q;
    map<int,int>mp;
    while(q--) {
        int x,y; cin >> x >> y;
        if(x==1) {mp[y]++;}
        else cout << mp[y] << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}