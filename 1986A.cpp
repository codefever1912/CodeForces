#include <iostream>
using namespace std;

void solve() {
    int mn,mx;
    int a[3];
    for(auto &e : a) {
        cin >> e;
        mn = min(mn,e);
        mx = max(mx,e);
    }
    int ans = INT_MAX;
    for(int i{mn};i<=mx;i++) {
        int sum = abs(a[0]-i) + abs(a[1]-i) + abs(a[2]-i);
        ans = min(ans,sum);
    }

    cout << ans << endl;
}

int main() {
    int t;cin >> t;
    while(t--) {
        solve();
    }
}