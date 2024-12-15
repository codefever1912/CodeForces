#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin >>n;
    int a[n];
    for(auto &e:a){cin >> e;}
    int x,y;
    for(int i=0;i<n;i++){if(a[i]==1){x=i;break;}}
    for(int i=n-1;i>=0;i--){if(a[i]==1){y=i;break;}}
    int count=0;
    for(int i=x+1;i<y;i++){count+=(a[i]==0);}
    cout << count << endl;
}

int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
}