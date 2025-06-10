#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;cin >> n >> k;
    int prod = 1;
    for(int i=0;i<n;i++){
        int x;cin >> x;
        prod*=x;
    }
    if(2023%prod){cout << "NO" << endl;}
    else{
        cout << "YES" << endl;
        cout << 2023/prod << endl;
        for(int i=0;i<k;i++){
            cout << "1 ";
        }
        cout << endl;
    }
}

int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
}