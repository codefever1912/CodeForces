#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,l;cin>>a>>b>>l;
    int pow1=0,pow2=0;
    set<int>ans;
    for(int i=1;i<l;i*=a){pow1++;}
    for(int i=1;i<l;i*=b){pow2++;}
    for(int i=0;i<=pow1;i++){
        for(int j=0;j<=pow2;j++){
            int prod = pow(a,i)*pow(b,j);
            if(l%prod==0){ans.insert(l/prod);}
        }
    }
    cout << ans.size() << endl;
}   

int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
}