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
    vector<int>v(n), pref(n+1), suff(n+1);
    int mx = 0, mn = 0;
    int mini = 0, maxi = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        if(v[i] > mx) {mx = v[i]; maxi = i;}
        if(v[i] < mn) {mn = v[i]; mini = i;}
    }

    pref[0] = v[0]; suff[n] = v[n-1];
    for(int i = 1; i <= n; i++) {
        pref[i] = min(pref[i-1], v[i]);
        suff[n-i] = max(suff[n-i+1], v[n-i]);
    }

    vector<char>ans(n);
    for(int i = 1; i <= n; i++) {
        if (i-1 == maxi) {ans[i] = '1'; continue;}
        else if (i-1 == mini) {ans[i] = '1'; continue;}
        else {
            if (i-1 > mini && i-1 < maxi) {ans[i-1] = '0'; continue;}
            else if ()
        }
    }

    for (char c : ans) {cout << c;}
    cout << nl;

}

int main(){
    fastio();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}