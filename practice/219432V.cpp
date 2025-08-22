/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    for(int i{1};i<=4*n;i++) {
        if(i%4==0) cout << "PUM\n";
        else cout << i << ' ';
    }
}

int main(){
    fastio();

    solve();

    return 0;
}