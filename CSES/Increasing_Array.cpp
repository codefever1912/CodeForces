#include <iostream>
using namespace std;

#define ll long long
int main(){
    int n;
    cin >> n;
    ll a[n];
    int mx=0;ll ans=0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        mx = max(x,mx);
        ans+=mx-x;
    }
    cout << ans << endl;
}