/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    for(int i{1};i<=n;i++) {
        string s = string(n-i,' ');
        s += string(2*i-1, '*');
        cout << s << '\n';
    }
}

int main(){
    fastio();

    solve();
}