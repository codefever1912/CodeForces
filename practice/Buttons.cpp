#include <iostream>
using namespace std;

void solve() {
    //Important point is the parity of the common buttons based on which it decides who gets the last chance
    int a,b,c; cin >> a >> b >> c;
        cout << ((a + (c%2) > b)?"First":"Second") << endl;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}