/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string s; cin >> s;
    // checking if there's a subsequence "hello" within s
    int i{0}, j{0};
    string check = "hello";
    while(i < s.size()) {
        if(s[i]==check[j]) {i++; j++;}
        else i++;
    }

    cout << ((j==check.size())?"YES":"NO") << '\n'; 
}

int main(){
    fastio();

    solve();
}   