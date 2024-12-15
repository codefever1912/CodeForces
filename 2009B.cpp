#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;cin >> n;
    vector<int>a;
    while(n--) {
        string s; cin >> s;
        a.push_back(s.find('#'));
    }
    reverse(a.begin(),a.end());
    for(int x : a) {
        cout << x + 1 << " ";
    }
    cout << endl;
}

int main() {
    int t;cin >> t;
    while(t--) {
        solve();
    }
}