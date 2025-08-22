#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll a,b;cin >> a >> b;
    (a+b)%2==0?cout << "Bob" << endl:cout << "Alice" << endl;
}

int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
}