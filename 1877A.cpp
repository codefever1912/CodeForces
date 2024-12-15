#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n-1];
        int ans{0};
        for(auto &e : a) {cin >> e; ans += e;}
        cout << 0 - ans << endl;
    }
}