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
    // M. distinct elements
    int n,q; cin >> n >> q;
    vector<int>v(n);
    vin(v);
    set<int>s(v.begin(), v.end());
    v = vector<int>(s.begin(), s.end());
    while(q--) {
        int x; cin >> x;
        auto it = lower_bound(v.begin(), v.end(), x);
        if(s.find(x) != s.end()) {it--;}
        int lower = it - v.begin();
        int greater = v.end() - it;
        cout << lower << " " << greater << nl;   
    }    
    

}

int main(){
    fastio();

    solve();
}   