#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin >> n;
    vector<int>count(n,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char x;cin >> x;
            count[i]+=(x=='1');
        }
    }  
    bool ans = true;
    for(int i=0;i<n-1;i++){
        if(count[i]==count[i+1] && count[i]!=0){
            cout << "SQUARE" << endl;ans = false;break;
        }
    }
    if(ans) cout << "TRIANGLE" << endl;
}

int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
}