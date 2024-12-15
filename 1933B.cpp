#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    int a[n],sum=0,m0=0,m1=0,m2=0;
    for(auto &e:a){cin >> e;sum+=e;m0+=(e%3==0);m1+=(e%3==1);m2+=(e%3==2);}
    if(sum%3==0){cout << 0 << endl;return;}
    else if(sum%3==2){cout << 1 << endl;return;}
    if(m1!=0){cout << 1 << endl;}
    else if(m1==0&&m2>=2){
        cout << 2 << endl;}
    else{cout << n-m0 << endl;}
}

int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
}