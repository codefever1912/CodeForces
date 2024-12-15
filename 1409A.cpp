#include <bits/stdc++.h>
using namespace std;

#define long long ll;

void solve(){
    int a,b;cin >> a >> b; 
    if(a==b){cout << 0 << endl;return;}
    else if(abs(a-b)<10){cout << 1 << endl;return;}
    int diff = abs(a-b);
    if(diff%10){cout << diff/10 +1 << endl;}
    else cout << diff/10 << endl;
}

int main(){
    int t;cin >>t;
    while(t--){
        solve();
    }
}