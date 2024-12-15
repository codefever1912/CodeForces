#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n,a,b;cin >> n >>a>> b;
    if(n%2){
        if(b>2*a){cout << a*n << endl;}
        else cout << b*(n/2) + a << endl;
    }else{
        cout << ((a*n > b*n/2) ? b*n/2 : a*n) << endl;
    }
}

int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
}