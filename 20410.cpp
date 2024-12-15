#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<bool>a(5,false);
    for(int i{0};i<4;i++) {
        int x;cin >> x;
        a[x-1] = true;
    }

    for(int i{0};i<5;i++) {
        if(!a[i]) {cout << i+1 <<endl; break;}
    }
}

int main() {
    int t=1;
    while(t--) {
        solve();
    }
}