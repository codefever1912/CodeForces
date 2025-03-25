/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl '\n'

void solve() {
    stack<int>st;
    int q; cin >> q;
    while(q--) {
        string s; cin >> s;
        if(s == "push") {
            int x; cin >> x;
            st.push(x);
        } else if(s == "top") {
            cout << st.top() << nl;
        } else {
            st.pop();
        }
    }
}

int main(){
    fastio();

    solve();
}   