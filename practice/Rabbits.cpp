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
    
    for (int i = 2; i < n - 2; i++) {
        if (s[i] == '0' && s[i-2] == '1' && s[i-1] == '1' && s[i+1] == '1' && s[i+2] == '1') {
            cout << "NO" << "\n";
            return;
        }
    }

    int zeros = 0;
    for (char c : s) {
        zeros += (c == '0');
    }

    if (zeros == 1 && s[0] != '0' && s[n-1] != '0') {
        cout << "NO" << '\n';
        return;
    }

    cout << "YES" << '\n';
}

int main () {
    fastio();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}