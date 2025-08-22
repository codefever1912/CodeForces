/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl '\n'

bool cmp(const pair<ll, string>&p, const pair<ll, string>&q) {
    if(p.first != q.first) {
        return p.first > q.first;
    }
    
    return p.second < q.second;
}

void solve() {
    int n; cin >> n;
    vector<pair<ll, string>>v;
    for(int i{0};i<n;i++) {
        string s; cin >> s;
        ll x; cin >> x;
        v.emplace_back(x,s);
    }

    sort(v.begin(), v.end(),cmp);
    for(const auto &p : v) {
        cout << p.second << " " << p.first << nl;
    } 
}

int main(){
    fastio();

    solve();
}   