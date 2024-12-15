#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin >> n;
    string ans;
    if(n>=53){
        int x = n-53;
        ans += char(x+'a');
        ans+="zz";
    }else if(n>=28&&n<53){
        ans+='a';n--;
        int x = n-27;
        ans+=char(x+'a');
        ans+='z';
    }else{
        ans+="aa";
        int x = n-3;
        ans+=char(x+'a');
    }
    cout << ans << endl;
}

int main(){
    int t;  cin >> t;
    while(t--){
        solve();
    }
}