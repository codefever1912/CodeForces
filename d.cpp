/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio()  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl '\n'

void solve() {
    int n,q; cin >> n >> q;
    vector<int>v(n);
    for(auto &e : v) {cin >> e;}
    sort(v.begin(), v.end());
    while(q--) {
        string s; cin >> s;
        int x; cin >> x;
        if(s == "binary_search") {
            int s=0, e=n-1;
            while(s <= e) {
                int mid = s + (e-s)/2;
                if(v[mid]==x) {cout << "found" << nl; break;}
                else if(v[mid] > x) {e = mid - 1;}
                else if(v[mid] < x) {s = mid + 1;}
            }
            cout << "not found" << nl;
        } else if(s == "lower_bound"){
            for(int i=0;i<n;i++) {
                if(v[i] >= x) {cout << v[i] << nl; break;}
            }
            cout << -1 << nl;
        } else if(s == "upper_bound") {
            for(int i=0;i<n;i++) {
                if(v[i] > x) {cout << v[i] << nl; break;}
            }
            cout << -1 << nl;
        }
    }
}

int main(){
    fastio();
    solve();

    return 0;
}