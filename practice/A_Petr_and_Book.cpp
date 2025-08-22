/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio()  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl '\n'
#define vin(v) for(auto &e : v) {cin >> e;}

void solve() {
    int n; cin >> n;
    vector<int>v(7);
    vin(v);
    int i = 0, sum = 0;
    while(sum < n) {
        sum += v[i];
        i++;
        i = i%7;
    }

    cout << ((i==0) ? 7: i) << nl;
}

int main(){
    fastio();
    solve();

    return 0;
}