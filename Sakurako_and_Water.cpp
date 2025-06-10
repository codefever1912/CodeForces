#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<vector<int>> a(n, vector<int>(n));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    
    map<int, vector<int>> diagonals; 
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i][j] < 0) {
                diagonals[i-j].push_back(a[i][j]);
            }
        }
    }
    
    long long ans = 0;
    for(auto it = diagonals.begin(); it != diagonals.end(); it++) {
        int max_neg = 0;
        for(int val : it->second) {
            max_neg = max(max_neg, abs(val));
        }
        ans += max_neg;
    }
    
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}