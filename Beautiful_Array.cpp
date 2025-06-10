#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b; cin >> a >> b;
    // a=mean, b=median
    vector<int>ans(3);
    if(a==b) {
        for(int i{0};i<3;i++){
            ans[i]=a;
        }
    } else {
        if(b>=0) {
            ans[1] = ans[2] = b;
            ans[0] = 3*a-2*b;
        } else {
            ans[0] = ans[1] = b;
            ans[2] = 3*a-2*b;
        }
    }

    cout << ans.size() << endl;
    for(int x : ans) {cout << x << " ";}
    cout << endl;
}   

int main() {
    int t=1;
    while(t--) {
        solve();
    }
}