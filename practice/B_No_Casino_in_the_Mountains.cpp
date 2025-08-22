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
    int n,k; cin >> n >> k;
    vector<int>v(n);
    vin(v);

    int hikes = 0;
    int cnt = 0;
    for (int i = 0; i < n;) {
        cnt += (v[i] == 0);
        if (cnt == k) {hikes++; i += 2; cnt = 0;}
        else if (v[i] == 1) {
            cnt = 0; i++;
        } else i++; 
    }

    cout << hikes << nl;
}

int main () {
    fastio();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}