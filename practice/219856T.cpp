/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string s; cin >> s;
    int idx;
    idx = s.find("=");
    idx++;
    cout << "username: ";
    while(s[idx]!='&') {
        cout << s[idx];
        idx++;
    }
    cout << '\n';
    while(s[idx]!='=') {idx++;}
    cout << "pwd: ";
    idx++;
    while(s[idx]!='&') {
        cout << s[idx];
        idx++;
    }
    cout << '\n';
    while(s[idx]!='=') {idx++;}
    cout << "profile: ";
    idx++;
    while(s[idx]!='&') {
        cout << s[idx]; 
        idx++;
    }
    cout << '\n';
    while(s[idx]!='=') {idx++;}
    cout << "role: ";
    idx++;
    while(s[idx]!='&') {
        cout << s[idx];
        idx++;
    }
    cout << '\n';
    while(s[idx]!='=') {idx++;}
    cout << "key: ";
    idx++;
    while(idx<s.size()) {
        cout << s[idx];
        idx++;
    }
    cout << '\n';
}

int main(){
    fastio();

    solve();
}