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
    v = vector<int>(s.begin(), s.end()); // v= {1,2,3,4,5}
    while(q--) {
        int x; cin >> x;
        auto it = lower_bound(v.begin(), v.end(), x); // =? returns it -> 1 for x=1, lower = 1-0
        int lower, greater;
        if(s.find(x) != s.end()) {greater = v.end() - it--;} 
        else { greater = v.end() - it;}
        lower = it - v.begin();
        cout << lower << " " << greater << nl;   
    }    
}

int main(){
    fastio();
    solve();
}   