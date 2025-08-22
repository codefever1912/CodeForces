/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl '\n'

void solve() {
    queue<int>q;
    int n; cin >> n;
    while(n--) {
        string s; cin >> s;
        if(s == "push") {
            int x; cin >> x;
            q.push(x);
        } else if(s == "pop") {
            q.pop();
        } else if(s == "front") {
            cout << q.front() << nl;
        } else {
            cout << q.back() << nl;
        }
    }
}

int main(){
    fastio();

    solve();
}   