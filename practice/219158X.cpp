/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int l1,r1,l2,r2; cin >> l1 >> r1 >> l2 >> r2;
    if(l2 > r1 || r2 < l1) {cout << -1 << endl; return;}
    else cout << max(l1,l2) << " " << min(r1,r2) << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}