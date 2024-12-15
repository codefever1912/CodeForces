#include <iostream>
using namespace std;

void solve() {
    int a,b;cin >> a >> b;
    if(a==0) {
        if(b%2){cout << "NO" << endl;}
        else cout << "YES" << endl;
    }else if(b==0) {
        if(a%2) {cout << "NO" << endl;}
        else cout << "YES" << endl;
    }else{
        if((a+b*2)%2) {cout << "NO" << endl;}
        else cout << "YES" << endl;
    }
}

int main() {
    int t;cin >> t;
    while(t--) {
        solve();
    }
}