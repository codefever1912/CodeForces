#include <iostream>
#include <vector>
using namespace std;

void solve() {
    //Splitting the array into two parts such that their sums have same parity
    int n; cin >> n;
    vector<int>a(n);
    int sum{0};
    for(auto &e : a){cin >> e; sum+=e;}
    cout << ((sum%2==0)?"YES":"NO") << endl;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}