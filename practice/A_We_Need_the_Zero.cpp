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
    int _xor = 0;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        _xor ^= x;
    }

    if(n%2==0 && _xor != 0) {cout << -1 << nl;}
    else cout << _xor << nl;

}

int main(){
    fastio();
    int tests; cin >> tests;
    while(tests--) {
        solve();
    }
}