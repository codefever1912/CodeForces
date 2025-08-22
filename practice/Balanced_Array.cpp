#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin >> n;
    if(n%4){cout << "NO" << endl;return;}
    vector<int>ans;
    for(int i=1;i<=n/2;i++){ans.push_back(i*2);}
    for(int i=0;i<n/2;i++){
        if(ans[i]<=n/2){ans.push_back(ans[i]-1);}
        else ans.push_back(ans[i]+1);
    }
    cout << "YES" << endl;
    for(int x:ans){cout << x << " ";}
    cout << endl;
}

int main(){
    int t;cin >>t;
    while(t--){
        solve();
    }
}