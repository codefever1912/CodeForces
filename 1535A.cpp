#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    vector<int>a(4);
    for(int i=0;i<4;i++){
        cin >> a[i];
    }
    int mx = max(a[0],a[1]),my = max(a[2],a[3]);
    sort(a.begin(),a.end()); 
    if((mx==a[2] or mx==a[3] )and (my==a[2] or my==a[3])){cout << "YES"<<endl;}
    else cout << "NO" << endl;  
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}