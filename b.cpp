/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl '\n'

bool cmp(const pair<vector<int>, string>&p1, const pair<vector<int>, string>&p2) {
    int sum1{0}, sum2{0};
    for(int x : p1.first) {sum1 += x;}
    for(int x : p2.first) {sum2 += x;}
    if(sum1 == sum2) {
        return p1.second < p2.second;
    }
    return sum1 >= sum2;
}

void solve() {
    int n,q; cin >> n >> q;
    string s; cin >> s;
    unordered_map<string, function<void(string &)>> mp = {
        {"pop_back", [](string &s) {
            if(!s.empty()) {
                s.pop_back();
            }    
            return s;
        }},

        {"push_back", [](string &s, char c) {
            s.push_back(c);
            return s;
        }},

        {"front", [](string &s) {
            return s.front();
        }},

        {"back", [](string &s) {
            return s.back();
        }},

        {"sort", [](string &s, int l, int r) {
            sort(s.begin() + l, s.begin() + r);
        }},

        {"reverse", [](string &s) {
            reverse(s.begin(), s.end());
        }},

        {"print", [](string &s, int pos) {
            return s.at(pos);
        }},

        {"substr", [](string &s, int l, int r) {
            return s.substr();
        }},
    };

    while(q--) {
        string query;
        getline(cin, query);
        if(query.find(' ') == string::npos) {
            cout << mp[query](s) << nl;
        }
    }

}

int main(){
    fastio();
    solve();
    // solve();
}