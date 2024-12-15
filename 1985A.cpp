#include <iostream>
using namespace std;

void solve() {
    string a,b;cin >> a >> b;
    a[0] = a[0] ^ b[0];
    b[0] = a[0] ^ b[0];
    a[0] = a[0] ^ b[0];
    cout << a << " " << b << endl;
}

int main() {
    int t;cin >> t;
    while(t--) {
        solve();
    }
}