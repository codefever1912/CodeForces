/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n,m; cin >> n >> m;
    vector<int>a(n),b(m);
    for(auto &e : a) {cin >> e;}
    for(auto &e : b) {cin >> e;}
    int i{0},j{0};
    while(i < n) {
        if(a[i]==b[j]) {i++;j++;}
        else i++;
    }
    cout << ((j==m)?"YES":"NO") << '\n';
}

int main(){
    fastio();
    // int t; cin >> t;
    solve();
}