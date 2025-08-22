/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    int a[n];
    for(auto &e : a) {cin >> e;}
    sort(a, a+n);
    for(int x : a) {cout << x << " ";}
    cout << '\n';
}

int main(){
    fastio();

    solve();
}