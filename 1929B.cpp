#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;cin>>n>>k;
    int ans=0;
    if(k==4*n-2){
        cout << n*2 << endl;
    }
    else{   
        if(k%2){
        ans+= k/2 + 1;
        }
        else{
            ans+=k/2;
        }
    cout << ans << endl;}
}

int main(){
    int t;cin>>t;
    while(t--){solve();}
}