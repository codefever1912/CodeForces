/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    int a[n];
    map<int,int>mp;
    int odd{0};
    for(auto &e:a) {
        cin >> e;
        mp[e]++;
    }
    for(auto e : mp) {
        odd += (e.second%2);
    }
    cout << ((odd>1)?"NO":"YES") << '\n';
}

int main(){
    fastio();

    solve();
}