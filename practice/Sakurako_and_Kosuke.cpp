#include <iostream>
using namespace std;

void solve() {
    int n; cin >> n;
    cout << ((n%2)?"Kosuke" :"Sakurako") << endl;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}