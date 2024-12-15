#include <iostream>
#include <vector>
using namespace std;

int getDisturbance(vector<int>&a, int idx) {
    int n = a.size();
    int temp = a[idx];
    a[idx] = a[n-idx];
    a[n-idx] = temp;

    int dist{0};
    for(int i{0}; i<n-1;i++) {
        if(a[i]==a[i+1]) {dist++;}
    }

    return dist;
}

void solve() {
    int n; cin >> n;
    vector<int>a;
    for(auto &e : a) {cin >> e;}
    int dist{0}, ans;
    for(int i{0}; i<n-1; i++) {if(a[i]==a[i+1]) dist++;}
    for(int i{0}; i<n/2; i++) {
        vector<int>temp = a;
        int x = getDisturbance(temp,i);
        ans = min(ans, x);
    }

    cout << ans << endl;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}