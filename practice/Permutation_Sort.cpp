#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int>a(n),b(n);
    for(auto &e:a){cin >> e;}
    b = a;
    sort(b.begin(),b.end());
    if(b==a){cout << 0 << endl;}
    else if(a[0]==n&&a[n-1]==1){cout << 3 << endl;}
    else if(a[n-1]!=n&&a[0]!=1){cout << 2 << endl;}
    else cout << 1 << endl;
}

int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
}