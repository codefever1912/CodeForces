/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    string x; cin >> x;
    ll sum{0};
    for(char c : x) {
        sum += c-'0';
    }

    cout << sum << '\n';
}

int main(){
    fastio();

    solve();
}