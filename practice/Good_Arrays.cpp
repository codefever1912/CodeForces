#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){   
    ll n;cin >> n;
    if(n==1){cout << "NO" << endl;return;}
    ll sum=0;
    int a[n];ll count=0;
    for(auto &e:a){cin >> e;count+=(e==1);sum+=e;}
    if(sum>n+count){cout << "YES" << endl;}
    else cout << "NO" << endl;
    
}

int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
}