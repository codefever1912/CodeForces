/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);

int hcf(int x, int y ) {
    return ((y%x==0)?x:hcf(y%x,x));
}

void solve() {
    int x,y; cin >> x >> y;
    int mx = max(x,y);
    int mn = min(x,y);
    cout << hcf(mn,mx) << '\n';
}

int main(){
    fastio();

    solve();
}