#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll a,b,c;cin>>a>>b>>c;
    ll ans = 0;
    ans+=a;
    if(b%3==0){
        ans+=b/3;
    }else{
        ll rem = b%3;
        ans+=b/3;
        if(c<(3-rem)){cout << -1 << endl;return;}
        ans++;c-=(3-rem);
    }
    if(c!=0){
        if(c<3){ans++;}
        else ans+=(c/3 + 1);
    }
    cout << ans << endl;
}

int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
}