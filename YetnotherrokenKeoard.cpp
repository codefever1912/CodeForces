#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;cin >> s;
    int low,upper;
    for(int i=0;i<s.size();i++){
        if(s[i]=='b'){
            s = s.substr(0,low) + s.substr(low);
        }else if(s[i]=='B'){
            s = s.substr(0,upper+1) + s.substr(upper);
        }
        if(s[i]==tolower(s[i])){
            low = i;
        }else if(s[i]==toupper(s[i])){
            upper = i;
        }

    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}