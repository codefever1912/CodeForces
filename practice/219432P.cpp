/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    for(int i{0};i<n;i++) {
        for(int j{n-i};j>0;j--) {
            cout << "*";
        }
        cout << '\n';
    }
}

int main(){
    fastio();

    solve();
}