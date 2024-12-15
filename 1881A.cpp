#include <iostream>
using namespace std;

void solve() {
    int n,m; cin >> n >> m;
    string x,s; cin >> x >> s;
    int cnt{0};
    while(x.find(s) == string::npos && x.size() <= n*m) {
        x += x;
        cnt++;
    }
    if(x.find(s) != string::npos) {cout << cnt << endl;}
    else cout << -1 << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}