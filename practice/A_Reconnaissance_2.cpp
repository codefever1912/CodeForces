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
    int n; cin >> n;
    vector<int>v(n);
    vin(v);
    int mn = abs(v[0] - v[1]);
    int x = 0, y = 1;
    for(int i = 1; i < n; i++) {
        if(abs(v[i] - v[i - 1]) < mn) {
            mn = abs(v[i] - v[i - 1]);
            x = i; y = i - 1;
        }
    }
    if(abs(v[0] - v[n-1]) < mn) {x = 0; y = n - 1;}

    cout << x + 1 << " " << y + 1 << nl;
}

int main(){
    fastio();
    solve();

    return 0;
}