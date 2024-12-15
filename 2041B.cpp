#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll w,b; cin >> w >> b;
    int sum = w+b,temp{0};
    int length = 1;
    while(temp+length <= sum) {
        temp += length;
        length++;
    }

    cout << length-1 << endl;
}

int main() {
    int t=1;
    cin >> t;
    while(t--) {
        solve();
    }
}