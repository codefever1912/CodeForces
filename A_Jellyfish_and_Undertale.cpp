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
    /*
    a b n
    5 3 3
    1 1 7 -> tools
    I - 2
    II - 1
    III - 1 + 1 = 2 - 1 = 1
    IV = same
    V = 1 + 7 = 8,5 -> 5 - 1 = 4
    vi -> ix

    7 1 5
    1 2 5 6 8
    i -> 1 + 1 = 2 - 1 = 1
    ii -> 1 + 2 = 3 - 1 = 2
    iii -> 1
    iv -> 1 + 5 = 6 - 1 = 5
    v,vi,vii,viii -> 4,3,2,1
    ix -> 1 + 6 -1 = 6
    x .. xiv -> 1
    xv -> 1 + 8 = min(9,7) = 7 - 1 = 6
    xvi -> xxi 
    */

    int a,b,n; cin >> a >> b >> n;
    vector<int>v(n);
    vin(v);
    ll time = b;
    for (int i = 0; i < n; i++) {
        time += min(a - 1, v[i]);
    }

    /*
    for (int i = 0, x = 0; i < n; i++) {
        cin >> x;
        time += min(a-1,x);
    }
    does not require a vector to store
    */
    cout << time << nl;

}

int main () {
    fastio();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}