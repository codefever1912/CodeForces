#include <iostream>
using namespace std;

#define ll long long

void solve(){
    ll n;cin>>n;
    // 6,8,10
    // 15,20,25
    if(n<=6){cout << 15 << endl;}
    else{
        if(n%2){n+=1;}
        cout << n*5/2 << endl;
    }
}

int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
}