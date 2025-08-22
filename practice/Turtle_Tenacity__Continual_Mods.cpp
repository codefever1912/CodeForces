#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(auto &e:a){cin >> e;}
    do{
        int x = a[0];
        for(int i=1;i<n;i++){x%=a[i];if(x==0){continue;}else if(i==n-1 && x!=0){cout << "YES" << endl;return;}}        
    }while(next_permutation(a.begin(),a.end()));
    cout << "NO" << endl;
}

int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
}   