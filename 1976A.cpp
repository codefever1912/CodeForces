#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin >> n;
    string s;cin >> s;
    bool ans = true;
    for(int i = 1; i<=s.size();i++) {
        if((isdigit(s[i]) && isalpha(s[i-1])) || (isalpha(s[i]) && tolower(s[i])!=s[i])) {ans = false;break;}
        else if(isalpha(s[i]) && isalpha(s[i-1]) && s[i]-'a' < s[i-1]-'a') {ans = false;break;}
        else if(isdigit(s[i]) && isdigit(s[i-1]) && s[i]-'0' < s[i-1]-'0') {ans = false;break;}
    }

    cout << ((ans)?"YES":"NO") << endl;
}

int main() {
    int t;cin >> t;
    while(t--) {
        solve();
    }
}