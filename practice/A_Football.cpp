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
    string a,b,s;
    int c1 = 0, c2 = 0;
    cin >> a;
    c1++;
    for(int i = 0; i < n - 1; i++) {
        cin >> s;
        if (s == a) {c1++;}
        else {b = s; c2++;}
    }

    if (c1 > c2) {cout << a << nl;}
    else cout << b << nl;
    

}

int main(){

    fastio();
    solve();

    return 0;

}