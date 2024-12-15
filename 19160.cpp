#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n,k;cin >> n >>k;
    ll prod = 1;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        prod*=x;
    }
    if(2023%prod){cout << "NO" << endl;return;}
    else{
        cout << "YES" << endl;
        cout << 2023/prod << " ";
        for(int i=0;i<k-1;i++){
            cout << 1 << " ";
        }
    }
    cout << endl;
}

int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
}