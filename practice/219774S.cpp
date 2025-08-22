/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n,m; cin >> n >> m;
    map<int,int>mp;
    int x;
    for(int i{0};i<n;i++) {
        for(int j{0};j<m;j++) {
            cin >> x;
            mp[x]++;
        }
    }
    cin >> x;

    if(mp.find(x) != mp.end()) {cout << "will not take number" << '\n';}
    else {cout << "will take number" << '\n';}

}

int main(){
    fastio();
    // int t; cin >> t;
    solve();
}