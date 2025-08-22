#include <bits/stdc++.h>
using namespace std;

void solve() {
    //Basically, since consecutive pair of integers has the same sum, this results in all odd and even placed integers
    //equal, for e.g. a1 + a2 = a2 + a3, hence a1=a3 and so on..
    int n;cin >> n;
    int a[n];
    map<int,int>mp;
    for(auto &e : a) {cin >> e;mp[e]++;}
    if(mp.size() == 1 || mp.size() == 2 && abs(mp.begin()->second - mp.rbegin()->second) <= 1) {cout << "Yes" << endl;}
    else {cout << "No" << endl; }   
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}