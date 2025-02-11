/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int  k,s; cin >> k >> s;
    ll ans{0};
    for(int x{0};x<=k;x++) {
        for(int y{0};y<=k;y++) {
            ll sum = s-x-y;
            ans += (sum>=0 && sum<=k);
        }
    }

    cout << ans << '\n';
    /*
    x+y+z = s -> 0 <= x,y,z <= k
    x=0 => y+z=s,  
    */
}

int main(){
    fastio();

    solve();
}