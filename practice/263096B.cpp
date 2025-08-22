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
    while(q--) {
        string s; cin >> s;
        int x; cin >> x;
        sort(v.begin(), v.end());
        if(s == "binary_search") { // O(n(log n)))
            int start = 0, end = n;
            while(start <= end) {
                int mid = start + (end-start)/2;
                if(v[mid]==x) {cout << "found" << nl; break;}
                else if(v[mid] > x) {end = mid - 1;}
                else if(v[mid] < x) {start = mid + 1;}
            }
            if(start > end) {cout << "not found" << nl;}
        } else if(s == "lower_bound"){ // std::lower_bound -> O(n log n)
            int start = 0, end = n;
            while(start < end) {
                int mid = start + (end - start) / 2;
                 if(v[mid] >= x) {end = mid;}
                 else start = mid + 1;
            }
            if(start == n) {cout << -1 << nl;}
            else cout << v[start] << nl;
        } else if(s == "upper_bound") { // std::upper_bound -> O(n log n)
            int start = 0, end = n;
            while(start < end) {
                int mid = start + (end - start) / 2;
                if(v[mid] > x) {end = mid;}
                else start = mid + 1;
            }
            if(start == n) {cout << -1 << nl;}
            else cout << v[start] << nl; 
        }
    }
}

int main(){
    fastio();
    solve();

    return 0;
}