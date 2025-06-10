#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;cin >> n;
    int a[n];
    vector<vector<int>>triplets;
    for(auto &e : a) {cin >> e;}
    for(int j = 0 ; j < n-2; j++) {
        vector<int>a;
        a.push_back(a[j]);
        a.push_back(a[j+1]);
        a.push_back(a[j+2]);

        triplets.push_back(a);
    }

    for(auto e : triplets) {
        for(int x : e) {cout << x << " ";}
        cout << endl;
    }
}

int main() {
    int t;cin >> t;
    while(t--) {
        solve();
    }
}