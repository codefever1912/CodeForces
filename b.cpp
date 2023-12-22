#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n;cin >> n;
    int a[n];
    for(auto &e:a){cin >> e;}
    ll ans = 0;
    while(!is_sorted(a,a+n)){
        ll m = a[0];
        for(int i=0;i<n-1;i++){
            a[i] = a[i+1];
        }
        a[n] = m;
        for(int i=n-1;i>=1;i--){
            if(a[n]>a[i-1]){swap(a[n],a[i-1]);}
            else break;
        }
        ans++;
    }
    cout << ans << endl;
}

int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
}