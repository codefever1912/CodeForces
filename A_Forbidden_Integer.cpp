/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl '\n'
#define vin(v) for(auto &e : v) {cin >> e;}

void solve() {
    int n,k,x; cin >> n >> k >> x;
    if(x == 1) {
        if(k == 1) {cout << "NO" << nl;}
        else if(k == 2) {
            if(n%2) {cout << "NO" << nl;}
            else {
                cout << "YES" << nl << n/2 << nl;
                for(int i = 0; i < n/2; i++) {
                    cout << 2 << ' ';
                }
                cout << nl;
            }
        }
        else {
            // k >= 3
            cout << "YES" << nl;
            if(n%2) {
                n -= 3;
                cout << n/2 + 1 << nl;
                cout << 3 << ' ';
                for(int i = 0; i < n/2; i++) {
                    cout << 2 << ' ';
                }
                cout << nl;
            } else {
                cout << n/2 << nl;
                for(int i = 0; i < n/2; i++) {
                    cout << 2 << ' ';
                }
                cout << nl;
            }
        }
    } else {
        cout << "YES" << nl;
        cout << n << nl;
        for(int i = 0; i < n; i++) {
            cout << 1 << ' ';
        }
        cout << nl;
    }
}

int main(){
    fastio();
    int t; cin >> t;
    while(t--) {
        solve();
    }
}   