#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin >> n;
    int a[2*n];
    for(auto &e:a){cin >> e;}
    sort(a,a+2*n);
    int ans = 0;
    for(int i=0;i<2*n-1;i+=2){
        ans+=a[i];
    }
    cout << ans << endl;
}

int main(){
    int t;cin >> t;
    while(t--){solve();}
}