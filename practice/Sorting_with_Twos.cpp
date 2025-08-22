#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n;cin >> n;
    int a[n];
    for(auto &d:a){cin >> d;}
    int limit;
    for(int i=n;i>1;i/=2){
        limit++;
    }
    for(int i=limit;i<n;i++){
        if(a[i]>a[i+1]){cout << "NO" << endl;return;}
    }
    cout << "YES" << endl;
}

int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
}