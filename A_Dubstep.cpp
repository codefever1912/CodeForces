/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio()  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl '\n'
#define vin(v) for(auto &e : v) {cin >> e;}

void solve() {

    string s; cin >> s;
    int n = s.size();
    // string curr = "";
    bool first = false;
    int i = 0;
    for (i; i < n - 2;) {
        if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
            if (first) {cout << ' ';}
            i += 3;
            first = false;
        } else {
            cout << s[i++];
            first = true;
            // curr += s[i++];
        }
    }

    while (i < n) {cout << s[i]; i++;}

}

int main(){

    fastio();
    solve();

    return 0;

}