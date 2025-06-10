#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll a,b;cin >> a>>b;
    ll lcm = a*b/gcd(a,b);
    if(lcm==b){
        cout << lcm*(b/a) << endl;
    }else{cout << lcm << endl;}
}

int main(){
    int t;cin >>t;
    while(t--){
        solve();
    }
}