#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n,m; cin >> n >> m;
    vector<string>words(n);
    for(auto &e : words) {cin >> e;}
    int sum{0},ans{0};
    int i{0};
    while(sum + words[i].size() <= m && i < words.size()) {
        sum += words[i].size();
        i++; ans++;
    }

    cout << ans << endl;
}

int main() {
    int t;cin >> t;
    while(t--) {
        solve();
    }
}