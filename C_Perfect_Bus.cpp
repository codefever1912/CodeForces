#include <iostream>
using namespace std;

#define ll long long

int main(){
    int n; cin >> n;
    ll a[n];
    for(auto &e:a){cin >> e;}
    ll ans=0;
    for(ll x:a){
        ans+=x;
        if(ans<0) ans=0;
    }
    cout << ans << endl;
}