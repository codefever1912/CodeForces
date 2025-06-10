/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl '\n'

void solve() {
    int n; cin >> n;
    vector<vector<int>>a(n, vector<int>(n));
    for(auto &e : a) {
        for(auto &v : e) {cin >> v;} 
    }
    
    vector<vector<int>>ans(n, vector<int>(n));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            ans[j][n-i-1] = a[i][j];
        }
    }
    
    for(vector<int>v : ans) {
        for(int x : v) {
            cout << x << " ";
        }
        cout << nl;
    }
}

int main(){
    fastio();

    solve();

    return 0;
}