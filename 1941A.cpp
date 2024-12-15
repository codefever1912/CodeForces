#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m,k;cin>>n>>m>>k;
    vector<int>a(n),b(m);
    for(auto &e:a){cin >> e;}
    for(auto &e:b){cin >> e;}
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]+b[j]<=k){count++;}
        }
    }
    cout << count << endl;
}

int main(){
    int t;cin >>t;
    while(t--){
        solve();
    }
}