/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl '\n'
#define vin(v) for(auto &e : v) {cin >> e;}

void solve() {
    // 1,..9, 10,20,30,40,50,...90,100,.200,300,...,900, 1000, 2000,....9000
    // int n; cin >> n;
    // string s = to_string(n);
    string s; cin >> s;
    // int digits = s.size();
    int ans = (s.size()-1) * 9 + (s[0]-'0');

    cout << ans << nl;
}

int main(){
    fastio();
    int t; cin >> t;
    while(t--) {
        solve();
    }
}   