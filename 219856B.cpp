/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string s;
    getline(cin, s);
    // int idx = s.find('\\');
    cout << s.substr(0,s.find('\\')) << '\n';
}

int main(){
    fastio();

    solve();

    return 0;
}