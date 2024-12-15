#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin >> n;
    for(int i=0;i<n;i++){
        if(i%2){
            cout << (i/2+1) << " ";
        }else{
            cout << (n-i/2) << " ";
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