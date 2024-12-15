#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n;cin >> n;
    if(n==1){cout << "YES" << endl;return;}
    vector<ll>a(n); ll sum=0;
    for(auto &e:a){cin >> e;sum+=e;}
    ll avg = sum/n;
    vector<ll>diff(n);
    int pos;
    for(ll i=0;i<n;i++){
        diff[i] = avg-a[i];
    }
    for(ll i=0;i<n;i++){if(diff[i]>=0)pos=i;break;}
    ll nsum=0,psum=0;
    for(ll i=0;i<pos;i++){
        if(diff[i]<0){nsum+=diff[i];}
    }
    for(ll i=pos;i<n;i++){
        if(diff[i]>0){psum+=diff[i];}
    }
    ll x = psum+nsum;
    cout << ((x==0)?"YES":"NO") << endl;
}

int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
}