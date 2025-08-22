#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long 
#define nl '\n'

void solve() {
    int q; cin >> q;
    priority_queue<int>pq;
    while(q--) {
        string s; cin >> s;
        if(s == "push") {
            int x; cin >> x;
            pq.push(x);
        } else if(s == "top") {
            cout << pq.top() << nl;
        } else {
            pq.pop();
        }
    }

}

int main() {
    fastio();
    solve();
}