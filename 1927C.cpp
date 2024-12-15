#include <bits/stdc++.h>
using namespace std;

void solve(){
    // int n,m,k;cin>>n>>m>>k;
    // int a[n],b[m];
    // for(auto&e:a){cin >> e;}
    // for(auto &e:b){cin >> e;}
    // vector<bool>ans(k,0);
    // int c1=0,c2=0;
    // for(int x:a){
    //     if(x<=k && ans[x]==0){
    //         ans[x] = 1;c1++;    
    //     }
    // }
    // for(int x:b){
    //     if(x<=k && ans[x]==0){
    //         ans[x]=1;c2++;
    //     }    
    // }
    // bool res = 1;
    // for(int x:ans){if(x==0)res=0;}
    // if(c1==k/2&&c2==k/2&&res){cout << "YES" << endl;}
    // else cout << "NO" << endl;
    int n,m,k;cin >>n>>m>>k;
    int a[n],b[m];
    for(auto &e:a){cin>>e;}
    for(auto &e:b){cin >> e;}
    vector<bool> ans(k,0);

}

int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
}