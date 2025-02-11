/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n,q; cin >> n >> q;
    vector<ll>a(n);
    for(auto &e : a) {cin >> e;}
    sort(a.begin(),a.end()); //n log n
    while(q--) { // O(q log n)
        ll x; cin >> x;
        ll s{0},e{a.size()-1};
        bool found{false};
        while(s <= e) { // log n
            ll mid = s + (e-s)/2;
            if(a[mid]==x) {cout << "found" << '\n'; found=true; break;}
            else if(a[mid] > x) {e = mid-1;}
            else s = mid+1;
        }
        if(!found) cout << "not found" << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}