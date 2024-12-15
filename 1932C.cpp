#include <bits/stdc++.h>
using namespace std;
     
#define ll long long
     
void solve(){
    int n,m;cin>>n>>m;
    vector<ll>a(n);
    for(auto &e:a){cin >> e;}
    string s;cin >> s;
    vector<int>rem;
    int left=0,right=n-1;
    for(int i=0;i<n;i++){
        if(s[i]=='L'){
            rem.push_back(a[left++]);
            //left++;
        }else{
            rem.push_back(a[right--]);
            //right--;
        }
    }
    vector<ll>ans;
    ll prod=1;
    for(int i=n-1;i>=0;i--){
        prod = (prod*rem[i])%m;
        ans.push_back(prod);
    }
    for(int i=n-1;i>=0;i--){
        cout << ans[i] << " ";
    }
    cout << endl;
}    
     
int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}