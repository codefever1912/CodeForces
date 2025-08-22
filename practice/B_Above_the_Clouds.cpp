/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl '\n'

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    map<int, int>mp;
    for(char c : s) {mp[c]++;}
    bool x = false;
    bool y = false;
    bool z = false;

    for(auto &e : mp) {
        if(e.second >= 3) {x = true; break;}
    }
    
    for(int i = 0; i < n - 1; i++) {
        if(s[i] == s[i + 1]) {y = true; break;}
    }

    for(int i = 1; i < n - 1; i++) {
        if(mp[s[i]] >= 2) {z = true; break;}
    }

    cout << ((x || y || z) ? "Yes" : "No") << nl;
}

int main(){
    fastio();
    int t; cin >> t;
    while(t--) {
        solve();
    }
}