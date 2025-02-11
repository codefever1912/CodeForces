/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n,m; cin >> n >> m;
    vector<vector<char>>a(n+1,vector<char>(m+1,'x'));
    for(int i{1};i<=n;i++) {
        for(int j{1};j<=m;j++) {
            cin >> a[i][j];
        }
    }
    int x,y; cin >> x >> y;
    // Possible values for x and y
    // 1 Centre - 4 check
    // 2*(m+n-4) edge points - 3 check
    // 4 corners - 2 check
    bool ans{false};
    if(a[x-1][y-1]=='x' && a[x-1][y]=='x' && a[x-1][y+1]=='x' && a[x][y-1]=='x' && a[x][y+1]=='x' && a[x+1][y-1]=='x' && a[x+1][y]=='x' && a[x+1][y+1]=='x') ans = true;
    cout << ((ans)?"yes":"no") << '\n';
}

int main(){
    fastio();

    solve();
}   