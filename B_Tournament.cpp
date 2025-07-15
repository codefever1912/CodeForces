/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio()  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl '\n'
#define vin(v) for(auto &e : v) {cin >> e;}

void solve() {
    
    // int n, j, k; cin >> n >> j >> k;
    // set<int>s;
    // vector<int>v(n);
    // for(int i = 0; i < n; i++) {
    //     cin >> v[i];
    //     if (s.find(v[i]) == s.end()) {s.insert(v[i]);}
    // }

    // int player = v[--j];
    // // int lower = 0;
    // // for(int i = 0; i < n; i++) {
    // //     lower += (v[i] < player);
    // // }

    // // if (s.size() - lower <= k) {cout << "YES" << nl;}
    // // else cout << "NO" << nl;

    // v = vector<int>(s.rbegin(), s.rend());
    // for(int i = k-1; i >= 0; i--) {
    //     if(v[i] == player) {cout << "YES" << nl; return;}
    // }
    
    // cout << "NO" << nl;

    int n, j, k; cin >> n >> j >> k;
    vector<int>v(n);
    vin(v);
    int mx = *max_element(v.begin(), v.end());
    if (v[j-1] == mx) {cout << "YES" << nl;}
    else {
        if (k == 1) {cout << "NO" << nl;}
        else cout << "YES" << nl;
    }

}

int main(){
    fastio();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}