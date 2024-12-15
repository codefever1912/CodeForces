#include <bits/stdc++.h>
using namespace std;

void solve() {
    // int x;cin >> x;
    // string s; cin >> s;
    // set<char>letters;
    // for(char c : s) {letters.insert(c);}
    // string r;
    // for(char c : letters) {r += c;}
    // //cout << r << endl;
    // map<char,int>mp;
    // int i = 0;
    // for(char c : letters) {
    //     mp[c] = i;
    //     i++;
    // }
    // //for(auto i : mp) {cout << i.second << endl;}
    // string ans;
    // i = r.size()-1;
    // for(char c : s) {
    //     ans += r[i-mp[c]];
    // }

    // cout << ans << endl;
    int n;cin >> n;
    int a[n];
    for(auto &e : a) {cin >> e;}
    vector<vector<int>>pairs;
    for(int j = 0 ; j < n-2; j++) {
        vector<int>a;
        a.push_back(a[j]);
        a.push_back(a[j+1]);
        a.push_back(a[j+2]);
        pairs.push_back(a);
    }
    

}

int main() {
    int t;cin >> t;
    while(t--) {
        solve();
    }
}