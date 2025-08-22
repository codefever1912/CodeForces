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
    string s; cin >> s;
    int n = s.size();
    for (int j = 0; j < n; j++) {
        s[j] = tolower(s[j]);
        if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u' || s[j] == 'y') continue;
        else {
            cout << '.' << s[j];
        }
    }

    cout << nl;
}

int main () {
    fastio();
    solve();

    return 0;
}