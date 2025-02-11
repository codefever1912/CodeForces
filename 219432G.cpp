/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);

ll factorial(ll x) {
    if(x==1||x==0) return 1;
    else return x*factorial(x-1);
}

void solve() {
    ll n; cin >> n;
    cout << factorial(n) << '\n';
}

int main(){
    fastio();
    int tests=1; cin >> tests;
    while(tests--) {
        solve();
    }  
}