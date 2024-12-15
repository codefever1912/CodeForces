#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin >> n;
    int a[n];
    int prod = 1;
    for(auto &e:a){cin >> e;}
    sort(a,a+n);
    for(int i=1;i<n;i++){prod*=a[i];}
    cout << prod*(a[0]+1) << endl;
}

int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
}