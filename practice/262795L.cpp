/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl '\n'

void solve() {
    int n,k; cin >> n >> k;
    set<int>s;
    map<int,int>mp;   
    for(int i{0};i<n;i++) {
        int x; cin >> x;
        s.insert(x);
        if(mp.find(x) == mp.end()) {mp[x] = i+1;}
    }
    
    if(s.size() >= k) {
        cout << "YES" << nl;
        for(int x : s) {
            if(k==0) {return;}
            cout << mp[x] << " ";
            k--;
        }
        cout << nl;
    } else cout << "NO" << nl;
}

int main(){
    fastio();

    solve();
}   