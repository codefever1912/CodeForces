#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,c1=0;cin >> n;
    vector<int>a(n);
    for(auto &e:a){cin >> e;c1+=(e==1);}
    int x=0,y=0;
    for(int i=0;i<n;i++){if(a[i]==0){x=i;break;}}
    for(int i=n-1;i>=0;i--){if(a[i]==0){y=i;break;}}
    int count=y-x+1;
    for(int i=x;i<=y;i++){
        if(a[i]==1){count--;c1--;}
    }
    cout << count+c1 << endl;
}

int main(){
    solve();
}