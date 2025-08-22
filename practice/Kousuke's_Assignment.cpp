#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    map<int, int> last_pos;
    last_pos[0] = -1;
    
    long long pref_sum = 0;
    vector<int> dp(n + 1, 0);
    
    for(int i = 0; i < n; i++) {
        pref_sum += a[i];
        dp[i + 1] = dp[i];
        
        if(last_pos.find(pref_sum) != last_pos.end()) {
            int prev_pos = last_pos[pref_sum];
            dp[i + 1] = max(dp[i + 1], dp[prev_pos + 1] + 1);
        }
        
        last_pos[pref_sum] = i;
    }
    
    cout << dp[n] << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        solve();
    }
}