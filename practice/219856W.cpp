/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define nl '\n';

void solve() {
    string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int n; cin >> n;
    string s; cin >> s;
    for(char c : s) {
        int idx;
        if(n==1) {
            cout << key[original.find(c)];
        } else {
            cout << original[key.find(c)];
        }
    } 
    cout << '\n';
}

int main(){
    fastio();

    solve();
}