#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin >> n;
    string s;cin >> s;
    int i=0,cnt=0;
    while(i<n){
        if(s[i+1]=='@'){cnt++;i++;}
        else if(s[i+2]=='@'){cnt++;i+=2;}
        else if(s[i+1]=='.'){i++;}
        else if(s[i+2]=='.'){i+=2;}
        else break;
    }
    cout << cnt << endl;
}

int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
}