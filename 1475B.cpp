#include <iostream>
using namespace std;

void solve(){
    int n;cin >> n;
    int x = n/2020;
    if(n-x*2020>x || n-x*2020<0){cout << "NO" << endl;}
    else cout << "YES" << endl;
}

int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
}