#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long 
#define nl '\n'

void solve() {
    
    int n,q; cin >> q >> n;
    while(q--) {
        int x,i; cin >> x;
        if(x == 1) {cin >> i; n |= i; cout << n << nl;}
        else if(x == 2) {cin >> i; n &= i; cout << n << nl;}
        else if(x == 3) {cin >> i; n ^= i; cout << n << nl;}
        else if(x == 4) {n = ~n; cout << n << nl;}
    }
}

int main() {
    fastio();
    solve();
}