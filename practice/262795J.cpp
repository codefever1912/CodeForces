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
    sum1 = accumulate(p1.first.begin(), p1.first.end(),0);
    sum2 = accumulate(p2.first.begin(), p2.first.end(),0);
    if(sum1 == sum2) {
        return p1.second < p2.second;
    }
    return sum1 > sum2;
}

void solve() {
    int n; cin >> n;
    vector<pair<vector<int>, string>>v;
    while(n--) {
        string name; cin >> name;
        vector<int>a(4);
        for(auto &e : a) {cin >> e;}
        v.push_back({a,name});
    }

    sort(v.begin(), v.end(), cmp);    
    for(int i=0; i<v.size(); i++) {
        cout << v[i].second << ' ';
        cout << accumulate(v[i].first.begin(), v[i].first.end(),0) << ' ';
        for(int x : v[i].first) {
            cout << x << " ";
        }
        cout << nl;
    }
}

int main(){
    fastio();
    solve();
    // solve();
}