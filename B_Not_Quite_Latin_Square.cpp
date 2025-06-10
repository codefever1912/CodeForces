#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    for(int i=0;i<3;i++){
        int ans[100] = {0};
        char a,b,c;cin >> a >> b >> c;
        ans[a-'A']++;ans[b-'A']++;ans[c-'A']++;
        for(int i=0;i<3;i++){
            if(ans[i]==0){cout << char('A'+i)<<endl;}
        }
    }
}

int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
}