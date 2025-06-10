#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    for(int i=0;i<3;i++){
        int ans[3] = {0};
        char a,b,c;cin >> a >> b >> c;
        ans[a-'a']++;ans[b-'a']++;ans[c-'a']++;
        for(int i=0;i<3;i++){
            if(x==0){cout << char('a'+i)}
        }
    }
    
}

int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
}