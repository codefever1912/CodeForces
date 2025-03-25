#include <bits/stdc++.h>
using namespace std;

#define fastio() {ios_base::sync_with_stdio(false); cin.tie(NULL);}
#define ll long long
#define nl '\n'
#define vin(v) for(auto &e : v) {cin >> e;}

int main() {
    // // using a map to call functions as strings, where strings are mapped to lambda functions
    // using RetType = variant<void *, char, string>;
    // unordered_map<string, function<RetType(string &, optional<int>, optional<int>, optional<char>)>> mp = {
    //     {"pop_back", [](string &s) {
    //         if(!s.empty()) {
    //             s.pop_back();
    //         }    
    //     }},

    //     {"push_back", [](string &s, optional<int>, optional<int>, optional<char> c) {
    //         s.push_back(*c);
    //     }},

    //     {"front", [](string &s) {
    //         return s.front();
    //     }},

    //     {"back", [](string &s) {
    //         return s.back();
    //     }},

    //     {"sort", [](string &s, int l, int r) {
    //         sort(s.begin() + l, s.begin() + r);
    //     }},

    //     {"reverse", [](string &s) {
    //         reverse(s.begin(), s.end());
    //     }},

    //     {"print", [](string &s, int pos) {
    //         return s.at(pos);
    //     }},

    //     {"substr", [](string &s, int l, int r) {
    //         return s.substr();
    //     }},
    // };

    // Using prefix sum for efficient rang esum queries  over an array of large size
    //1d
    int n = 10;
    vector<int>a(n);
    for(int i{1}; i<=n; i++) {
        a[i] = i;
    }
    vector<int>prefix(n+1, 0);
    for(int i=1; i<n; i++) {
        prefix[i] = prefix[i-1] + a[i-1];
    }
    for(int i=1; i<=n; i++) {
        cout << prefix[i] << nl;
    }

    // Range sum query
    int l,r;
    //Making sure the indices are within the range [0,n)
    l = ((l > 0)?l:l+n);
    r = ((r > 0)?r:r+n);
    cout << a[r] - a[l];
    // In the event of query updation, i.e. adding or subtracting a specific value within range[l,r] for every query
    
    //2d 
    
}