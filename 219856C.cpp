/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string x,y; cin >> x >> y;
    bool ans{false};
    // sort(x.begin(),x.end());
    // sort(y.begin(),y.end());
    cout << ((x<=y)?x:y) << '\n';
}

int main(){
    fastio();

    solve();

    return 0;
}