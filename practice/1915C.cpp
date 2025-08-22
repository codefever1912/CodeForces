#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n;cin >> n;
    ll sum = 0;
    for(int i=0;i<n;i++){
        int x;cin >> x;
        sum+=x;
    }
    if(sqrt(sum)==int(sqrt(sum))){cout << "YES"<< endl;}
    else cout << "NO" << endl; 
}

int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
}