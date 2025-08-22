#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n;cin >> n;
    int a[n];ll year=0;
    for(auto &e:a){cin >> e;}
    year+=a[0];
    for(int i=1;i<n;i++){
        if(year==a[i]){year+=a[i];}
        else year+= a[i]-year%a[i];
    }
    cout << year << endl;
}
int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
}