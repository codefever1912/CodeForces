/*
  Codeforces -> codefever1912
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl '\n'
#define vin(v) for(auto &e : v) {cin >> e;}

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    
    // int curr = 1, mx = -1;
    // for (int i = 1; i < n; i++) {
    //     if (s[i] == s[i - 1]) curr++;
    //     else {
    //         mx = max(mx, curr);
    //         curr = 1;
    //     } 
    // }

    int curr = 1, ans = 1;
    for (int i = 1; i < n; i++) {
        if (s[i] != s[i - 1]) curr = 1;
        else curr++;
        
        ans = max(ans, curr);
    }

    cout << ans + 1 << nl;
}

int main () {
    fastio();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}