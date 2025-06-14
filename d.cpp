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
    vector<int>v(n);
    vin(v);
    int i = 0;
    int sum = 0;
    while(true) {
        i = i % 7;
        if(sum + v[i] >= n) break;
        else sum += v[i];
    }

    cout << i + 1 << nl;
}

int main(){
    fastio();
    solve();

    return 0;
}