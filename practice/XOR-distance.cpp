#include <iostream>
#include <climits>
using namespace std;

#define ll long long

void solve(){
    ll a,b,r; cin >> a >> b >> r;
    ll mn = INT_MAX;
    ll value = (a^b);
    ll ans = INT_MAX;
    if(a==b){cout << 0 << endl;return;}
    else{
        for(ll i=0;i<=r;++i){
            if(i>value){
                ll x = abs((a^i)-(b^i));
                ans = min(ans,x);
            }
        }
        cout << ans << endl;
    }
}

int main(){
    int t;cin >> t;
    while(t--){solve();}
}