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
    int cnt{0};
    string curr;
    for(char c : s) {
        if(isalpha(c)) {curr += c;}
        else{
            if(!curr.empty()) {cnt++;curr="";}
        }
    }

    if(!curr.empty()) {cnt++;}

    cout << cnt << '\n';
}

int main() {
    fastio();

    solve();
}   