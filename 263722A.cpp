#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long 
#define nl '\n'

void solve() {
    int q; cin >> q;
    set<int>s;
    while(q--) {
        string n; cin >> n;
        if(n == "upper_bound") {
            int x; cin >> x;
            auto it = s.upper_bound(x);
            if(it == s.end()) {cout << -1 << nl;}
            else cout << *it << nl;
        } else if(n == "lower_bound") {
            int x; cin >> x;
            auto it = s.lower_bound(x);
            if(it == s.end()) {cout << -1 << nl;}
            else cout << *it << nl;
        } else if(n == "find") {
            int x; cin >> x;
            if(s.find(x) == s.end()) {cout << "not found" << nl;}
            else cout << "found" << nl;
        } else {
            int x; cin >> x;
            s.insert(x);
        }
    }

}

int main() {
    fastio();
    solve();
}