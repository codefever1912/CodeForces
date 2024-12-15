#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n;cin >> n;
    ll a[n];
    for(auto &e:a){cin >> e;}
    sort(a,a+n);
    ll ans = 0;
    for(ll i=0;i<n-1;i++){
        ans+=(a[i+1]-a[i]);
    }
    cout << ans << endl;
}

int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
}