/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);

int getMaxValueinSubArray(vector<int>a, int i, int j) {
    vector<int>v;
    int n = a.size();
    int mx{INT_MIN};
    for(int x{i};x<=j;x++) {
        mx = max(mx,a[x]);
    }

    return mx;
}

void solve() {
    int n; cin >> n;
    vector<int>a(n);
    vector<int>ans;
    for(auto &e : a) {cin >> e;}
    // 1 6 3 7
    // {1,6} == {6,1}
    // progression -> n elemtts, n-1 elemnts n-2....
    // O(n^2)
    for(int i{0};i<n;i++) {
        for(int j{i};j<n;j++) {
            ans.push_back(getMaxValueinSubArray(a,i,j));
        }
    }

    for(int x : ans) {cout << x << ' ';}
    cout << '\n';
}

int main(){
    fastio();
    int t; cin >> t;
    while(t--) {
        solve();
    }
}