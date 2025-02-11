/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n,x; cin >> n;
    int a[n];
    for(int i{0};i<n;i++) {cin >> a[i];}
    cin >> x;
    for(int i{0};i<n;i++) {
        if(a[i]==x) {cout << i << '\n'; return;}
    }
    cout << -1 << '\n';
}

int main(){
    fastio();

    solve();
}