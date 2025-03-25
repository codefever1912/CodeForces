/*
  CodeForces - codefever1912
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    // string s
    // max subsequence that dosent have two same adjacent letters 
    // start from i=1 -> n-1
    // if(s[i]==s[i-1]) -> cnt stays 1
    // else ans = max(ans, cnt);
    // 0 -> n-2
    // aaabbccdfg
    int n; cin >> n;
    string s; cin >> s;
    // just remove consecutive occurences of same letter and return the len of resulting string
    // int i{0};
    // while(i < s.size()-1) { // O(n)
    //     if(s[i]==s[i+1]) {s.replace(i,1,"");}
    //     else i++;
    // }

    // cout << s.size() << '\n';
    int cnt{1};
    for(int i{1};i<n;i++) {
        cnt += (s[i]!=s[i-1]);
    }

    cout << cnt << '\n';
}

int main(){
    fastio();

    solve();
}