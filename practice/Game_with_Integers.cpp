#include <iostream>
using namespace std;

void solve() {
    int n; cin >> n;
    cout << ((n%3==0)?"Second":"First") << endl;
}

int main() {
    int t;cin >> t;
    while(t--) {
        solve();
    }
}