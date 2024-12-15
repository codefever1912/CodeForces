#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll a,b,c;cin>>a>>b>>c;
    ll ans = 0;
    ans+=a;
    if(b%3==0){
        ans+=b/3;
        ans+=(c/3 + c%3);
    }else{
        ll rem = b%3;
        ans+=b/3;
        if((rem+c)%3!=0){cout << -1 << endl;return;}
        ans+=((rem+c)/3);
    }
    cout << ans << endl;
}

int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
}