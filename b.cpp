/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n,q; cin >> n >> q;
    vector<ll>a;
    for(auto &e : a) {cin >> e;}
    sort(a.begin(),a.end());
    while(q--) {
        ll x; cin >> x;
        ll s{0},e{a.size()};
        while(s <= e) {
            ll mid = s + (e-s)/2;
            if(a[mid]==x) cout << "found" << '\n';
            else if(a[mid] > x) {e = mid;}
            else s = mid;
        }
        cout << "not found" << '\n';
    }
}

int main(){
    fastio();

    solve();
}