#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<long long> a(n);
    long long total_sum = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total_sum += a[i];
    }
    
    // If total sum not divisible by n, impossible to equalize
    if (total_sum % n != 0) {
        cout << "NO\n";
        return;
    }
    
    long long target = total_sum / n;
    
    // Check differences from target
    vector<long long> diff(n);
    for (int i = 0; i < n; i++) {
        diff[i] = a[i] - target;
    }
    
    // Compute prefix and suffix excess
    vector<long long> prefix(n, 0);
    vector<long long> suffix(n, 0);
    
    prefix[0] = diff[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i-1] + diff[i];
    }
    
    suffix[n-1] = diff[n-1];
    for (int i = n-2; i >= 0; i--) {
        suffix[i] = suffix[i+1] + diff[i];
    }
    
    // Check if we can balance by moving excess
    bool possible = false;
    for (int i = 1; i < n-1; i++) {
        if (prefix[i-1] == -suffix[i+1]) {
            possible = true;
            break;
        }
    }
    
    cout << (possible ? "YES" : "NO") << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}