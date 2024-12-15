#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
    int x, y;cin >> x >> y;
    cout << max((y+1)/2, (x+y*4+14)/15) << endl;
}

int main() {
    int t;cin >> t;
    while(t--) {
        solve();
    }
}