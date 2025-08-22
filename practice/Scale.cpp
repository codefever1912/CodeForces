#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;cin >> n >> k;
    vector<vector<int>> mat(n);
    for(int i{0};i<n;i++) {
        vector<int>a(n);
        for(auto &e : a) {cin >> e;}
        mat.push_back(a);
    }
    if(k==1 || k==n) {
        for(int i{0};i<n;i++) {
            for(int x : mat[i]) {
                cout << x << " ";
            }
            cout << endl;
        }
    }
}

int main() {
    int t;cin >> t;
    while(t--) {
        solve();
    }
}