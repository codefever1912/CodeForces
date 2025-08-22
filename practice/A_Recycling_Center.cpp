/*
  Codeforces -> codefever1912
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl '\n'
#define vin(v) for(auto &e : v) {cin >> e;}

#define LIMIT 1e15

void solve() {
    int n, c; cin >> n >> c;
    vector<int>v(n);
    vin(v);
    sort(v.begin(), v.end());
    vector<int>less_than_c;
    for (int x : v) {
        if (x <= c) less_than_c.push_back(x);
    }

    int coins = 0, power = 0;
    for (int i = less_than_c.size() - 1; i >= 0; i--) {
        ll curr = less_than_c[i] * pow(2, power);
        if (curr > c) coins++;
        else power++;
    }    

    coins += n - less_than_c.size();

    cout << coins << nl;    
}

int main () {
    fastio();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}