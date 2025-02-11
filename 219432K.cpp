/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    for(int i{1};i<=n;i++) {
        if(n%i==0) cout << i << '\n';
    }
    
}

int main(){
    fastio();
    int tests=1;
    while(tests--) {
        solve();
    }  
}