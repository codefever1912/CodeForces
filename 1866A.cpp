#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
    int n; cin >> n;
    int ans{INT_MAX};
    for(int i{0}; i<n; i++) {
        int x; cin >> x;
        ans = min(ans, abs(x));
    }

    cout << ans << endl; 
}

int main() {
    // int t; cin >> t;
    // while(t--) {
    //     solve();
    // }
    solve();
}